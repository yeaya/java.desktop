#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream.h>

#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream$1.h>
#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream$2.h>
#include <jcpp.h>

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ClassLoaderObjectOutputStream$1 = ::sun::awt::datatransfer::ClassLoaderObjectOutputStream$1;
using $ClassLoaderObjectOutputStream$2 = ::sun::awt::datatransfer::ClassLoaderObjectOutputStream$2;

namespace sun {
	namespace awt {
		namespace datatransfer {

$FieldInfo _ClassLoaderObjectOutputStream_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/ClassLoader;>;", $PRIVATE | $FINAL, $field(ClassLoaderObjectOutputStream, map)},
	{}
};

$MethodInfo _ClassLoaderObjectOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(ClassLoaderObjectOutputStream::*)($OutputStream*)>(&ClassLoaderObjectOutputStream::init$)), "java.io.IOException"},
	{"annotateClass", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PROTECTED, nullptr, "java.io.IOException"},
	{"annotateProxyClass", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PROTECTED, nullptr, "java.io.IOException"},
	{"getClassLoaderMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/ClassLoader;>;", 0, $method(static_cast<$Map*(ClassLoaderObjectOutputStream::*)()>(&ClassLoaderObjectOutputStream::getClassLoaderMap))},
	{}
};

$InnerClassInfo _ClassLoaderObjectOutputStream_InnerClassesInfo_[] = {
	{"sun.awt.datatransfer.ClassLoaderObjectOutputStream$2", nullptr, nullptr, 0},
	{"sun.awt.datatransfer.ClassLoaderObjectOutputStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassLoaderObjectOutputStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.datatransfer.ClassLoaderObjectOutputStream",
	"java.io.ObjectOutputStream",
	nullptr,
	_ClassLoaderObjectOutputStream_FieldInfo_,
	_ClassLoaderObjectOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ClassLoaderObjectOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.datatransfer.ClassLoaderObjectOutputStream$2,sun.awt.datatransfer.ClassLoaderObjectOutputStream$1"
};

$Object* allocate$ClassLoaderObjectOutputStream($Class* clazz) {
	return $of($alloc(ClassLoaderObjectOutputStream));
}

void ClassLoaderObjectOutputStream::init$($OutputStream* os) {
	$ObjectOutputStream::init$(os);
	$set(this, map, $new($HashMap));
}

void ClassLoaderObjectOutputStream::annotateClass($Class* cl) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, classLoader, $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ClassLoaderObjectOutputStream$1, this, cl)))));
	$var($Set, s, $new($HashSet, 1));
	s->add($($nc(cl)->getName()));
	$nc(this->map)->put(s, classLoader);
}

void ClassLoaderObjectOutputStream::annotateProxyClass($Class* cl) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, classLoader, $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ClassLoaderObjectOutputStream$2, this, cl)))));
	$var($ClassArray, interfaces, $nc(cl)->getInterfaces());
	$var($Set, s, $new($HashSet, interfaces->length));
	for (int32_t i = 0; i < interfaces->length; ++i) {
		s->add($($nc(interfaces->get(i))->getName()));
	}
	$nc(this->map)->put(s, classLoader);
}

$Map* ClassLoaderObjectOutputStream::getClassLoaderMap() {
	return $new($HashMap, this->map);
}

ClassLoaderObjectOutputStream::ClassLoaderObjectOutputStream() {
}

$Class* ClassLoaderObjectOutputStream::load$($String* name, bool initialize) {
	$loadClass(ClassLoaderObjectOutputStream, name, initialize, &_ClassLoaderObjectOutputStream_ClassInfo_, allocate$ClassLoaderObjectOutputStream);
	return class$;
}

$Class* ClassLoaderObjectOutputStream::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun