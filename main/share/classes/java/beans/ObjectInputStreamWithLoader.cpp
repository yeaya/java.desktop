#include <java/beans/ObjectInputStreamWithLoader.h>

#include <com/sun/beans/finder/ClassFinder.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassFinder = ::com::sun::beans::finder::ClassFinder;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$FieldInfo _ObjectInputStreamWithLoader_FieldInfo_[] = {
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(ObjectInputStreamWithLoader, loader)},
	{}
};

$MethodInfo _ObjectInputStreamWithLoader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectInputStreamWithLoader::*)($InputStream*,$ClassLoader*)>(&ObjectInputStreamWithLoader::init$)), "java.io.IOException,java.io.StreamCorruptedException"},
	{"resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;", nullptr, $PROTECTED, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _ObjectInputStreamWithLoader_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.ObjectInputStreamWithLoader",
	"java.io.ObjectInputStream",
	nullptr,
	_ObjectInputStreamWithLoader_FieldInfo_,
	_ObjectInputStreamWithLoader_MethodInfo_
};

$Object* allocate$ObjectInputStreamWithLoader($Class* clazz) {
	return $of($alloc(ObjectInputStreamWithLoader));
}

void ObjectInputStreamWithLoader::init$($InputStream* in, $ClassLoader* loader) {
	$ObjectInputStream::init$(in);
	if (loader == nullptr) {
		$throwNew($IllegalArgumentException, "Illegal null argument to ObjectInputStreamWithLoader"_s);
	}
	$set(this, loader, loader);
}

$Class* ObjectInputStreamWithLoader::resolveClass($ObjectStreamClass* classDesc) {
	$var($String, cname, $nc(classDesc)->getName());
	return $ClassFinder::resolveClass(cname, this->loader);
}

ObjectInputStreamWithLoader::ObjectInputStreamWithLoader() {
}

$Class* ObjectInputStreamWithLoader::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStreamWithLoader, name, initialize, &_ObjectInputStreamWithLoader_ClassInfo_, allocate$ObjectInputStreamWithLoader);
	return class$;
}

$Class* ObjectInputStreamWithLoader::class$ = nullptr;

	} // beans
} // java