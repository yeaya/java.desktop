#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream$2.h>

#include <java/lang/ClassLoader.h>
#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ClassLoaderObjectOutputStream = ::sun::awt::datatransfer::ClassLoaderObjectOutputStream;

namespace sun {
	namespace awt {
		namespace datatransfer {

$FieldInfo _ClassLoaderObjectOutputStream$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/datatransfer/ClassLoaderObjectOutputStream;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoaderObjectOutputStream$2, this$0)},
	{"val$cl", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoaderObjectOutputStream$2, val$cl)},
	{}
};

$MethodInfo _ClassLoaderObjectOutputStream$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/datatransfer/ClassLoaderObjectOutputStream;Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(ClassLoaderObjectOutputStream$2::*)($ClassLoaderObjectOutputStream*,$Class*)>(&ClassLoaderObjectOutputStream$2::init$))},
	{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ClassLoaderObjectOutputStream$2_EnclosingMethodInfo_ = {
	"sun.awt.datatransfer.ClassLoaderObjectOutputStream",
	"annotateProxyClass",
	"(Ljava/lang/Class;)V"
};

$InnerClassInfo _ClassLoaderObjectOutputStream$2_InnerClassesInfo_[] = {
	{"sun.awt.datatransfer.ClassLoaderObjectOutputStream$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassLoaderObjectOutputStream$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.datatransfer.ClassLoaderObjectOutputStream$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ClassLoaderObjectOutputStream$2_FieldInfo_,
	_ClassLoaderObjectOutputStream$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
	&_ClassLoaderObjectOutputStream$2_EnclosingMethodInfo_,
	_ClassLoaderObjectOutputStream$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.datatransfer.ClassLoaderObjectOutputStream"
};

$Object* allocate$ClassLoaderObjectOutputStream$2($Class* clazz) {
	return $of($alloc(ClassLoaderObjectOutputStream$2));
}

void ClassLoaderObjectOutputStream$2::init$($ClassLoaderObjectOutputStream* this$0, $Class* val$cl) {
	$set(this, this$0, this$0);
	$set(this, val$cl, val$cl);
}

$Object* ClassLoaderObjectOutputStream$2::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$cl)->getClassLoader());
}

ClassLoaderObjectOutputStream$2::ClassLoaderObjectOutputStream$2() {
}

$Class* ClassLoaderObjectOutputStream$2::load$($String* name, bool initialize) {
	$loadClass(ClassLoaderObjectOutputStream$2, name, initialize, &_ClassLoaderObjectOutputStream$2_ClassInfo_, allocate$ClassLoaderObjectOutputStream$2);
	return class$;
}

$Class* ClassLoaderObjectOutputStream$2::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun