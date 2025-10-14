#include <sun/awt/datatransfer/ClassLoaderObjectInputStream.h>

#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessError.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Proxy.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef PUBLIC

using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessError = ::java::lang::IllegalAccessError;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Modifier = ::java::lang::reflect::Modifier;
using $Proxy = ::java::lang::reflect::Proxy;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace sun {
	namespace awt {
		namespace datatransfer {

$FieldInfo _ClassLoaderObjectInputStream_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/ClassLoader;>;", $PRIVATE | $FINAL, $field(ClassLoaderObjectInputStream, map)},
	{}
};

$MethodInfo _ClassLoaderObjectInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljava/util/Map;)V", "(Ljava/io/InputStream;Ljava/util/Map<Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/ClassLoader;>;)V", 0, $method(static_cast<void(ClassLoaderObjectInputStream::*)($InputStream*,$Map*)>(&ClassLoaderObjectInputStream::init$)), "java.io.IOException"},
	{"resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"resolveProxyClass", "([Ljava/lang/String;)Ljava/lang/Class;", "([Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _ClassLoaderObjectInputStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.datatransfer.ClassLoaderObjectInputStream",
	"java.io.ObjectInputStream",
	nullptr,
	_ClassLoaderObjectInputStream_FieldInfo_,
	_ClassLoaderObjectInputStream_MethodInfo_
};

$Object* allocate$ClassLoaderObjectInputStream($Class* clazz) {
	return $of($alloc(ClassLoaderObjectInputStream));
}

void ClassLoaderObjectInputStream::init$($InputStream* is, $Map* map) {
	$ObjectInputStream::init$(is);
	if (map == nullptr) {
		$throwNew($NullPointerException, "Null map"_s);
	}
	$set(this, map, map);
}

$Class* ClassLoaderObjectInputStream::resolveClass($ObjectStreamClass* classDesc) {
	$beforeCallerSensitive();
	$var($String, className, $nc(classDesc)->getName());
	$var($Set, s, $new($HashSet, 1));
	s->add(className);
	$var($ClassLoader, classLoader, $cast($ClassLoader, $nc(this->map)->get(s)));
	if (classLoader != nullptr) {
		return $Class::forName(className, false, classLoader);
	} else {
		return $ObjectInputStream::resolveClass(classDesc);
	}
}

$Class* ClassLoaderObjectInputStream::resolveProxyClass($StringArray* interfaces) {
	$beforeCallerSensitive();
	$var($Set, s, $new($HashSet, $nc(interfaces)->length));
	for (int32_t i = 0; i < $nc(interfaces)->length; ++i) {
		s->add(interfaces->get(i));
	}
	$var($ClassLoader, classLoader, $cast($ClassLoader, $nc(this->map)->get(s)));
	if (classLoader == nullptr) {
		return $ObjectInputStream::resolveProxyClass(interfaces);
	}
	$var($ClassLoader, nonPublicLoader, nullptr);
	bool hasNonPublicInterface = false;
	$var($ClassArray, classObjs, $new($ClassArray, $nc(interfaces)->length));
	for (int32_t i = 0; i < interfaces->length; ++i) {
		$Class* cl = $Class::forName(interfaces->get(i), false, classLoader);
		if (((int32_t)($nc(cl)->getModifiers() & (uint32_t)$Modifier::PUBLIC)) == 0) {
			if (hasNonPublicInterface) {
				if (nonPublicLoader != cl->getClassLoader()) {
					$throwNew($IllegalAccessError, "conflicting non-public interface class loaders"_s);
				}
			} else {
				$assign(nonPublicLoader, cl->getClassLoader());
				hasNonPublicInterface = true;
			}
		}
		classObjs->set(i, cl);
	}
	try {
		$Class* proxyClass = $Proxy::getProxyClass(hasNonPublicInterface ? nonPublicLoader : classLoader, classObjs);
		return proxyClass;
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, e, $catch());
		$throwNew($ClassNotFoundException, nullptr, e);
	}
	$shouldNotReachHere();
}

ClassLoaderObjectInputStream::ClassLoaderObjectInputStream() {
}

$Class* ClassLoaderObjectInputStream::load$($String* name, bool initialize) {
	$loadClass(ClassLoaderObjectInputStream, name, initialize, &_ClassLoaderObjectInputStream_ClassInfo_, allocate$ClassLoaderObjectInputStream);
	return class$;
}

$Class* ClassLoaderObjectInputStream::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun