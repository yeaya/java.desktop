#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream$1.h>

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

$FieldInfo _ClassLoaderObjectOutputStream$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/datatransfer/ClassLoaderObjectOutputStream;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoaderObjectOutputStream$1, this$0)},
	{"val$cl", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoaderObjectOutputStream$1, val$cl)},
	{}
};

$MethodInfo _ClassLoaderObjectOutputStream$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/datatransfer/ClassLoaderObjectOutputStream;Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(ClassLoaderObjectOutputStream$1::*)($ClassLoaderObjectOutputStream*,$Class*)>(&ClassLoaderObjectOutputStream$1::init$))},
	{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ClassLoaderObjectOutputStream$1_EnclosingMethodInfo_ = {
	"sun.awt.datatransfer.ClassLoaderObjectOutputStream",
	"annotateClass",
	"(Ljava/lang/Class;)V"
};

$InnerClassInfo _ClassLoaderObjectOutputStream$1_InnerClassesInfo_[] = {
	{"sun.awt.datatransfer.ClassLoaderObjectOutputStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassLoaderObjectOutputStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.datatransfer.ClassLoaderObjectOutputStream$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ClassLoaderObjectOutputStream$1_FieldInfo_,
	_ClassLoaderObjectOutputStream$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
	&_ClassLoaderObjectOutputStream$1_EnclosingMethodInfo_,
	_ClassLoaderObjectOutputStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.datatransfer.ClassLoaderObjectOutputStream"
};

$Object* allocate$ClassLoaderObjectOutputStream$1($Class* clazz) {
	return $of($alloc(ClassLoaderObjectOutputStream$1));
}

void ClassLoaderObjectOutputStream$1::init$($ClassLoaderObjectOutputStream* this$0, $Class* val$cl) {
	$set(this, this$0, this$0);
	$set(this, val$cl, val$cl);
}

$Object* ClassLoaderObjectOutputStream$1::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$cl)->getClassLoader());
}

ClassLoaderObjectOutputStream$1::ClassLoaderObjectOutputStream$1() {
}

$Class* ClassLoaderObjectOutputStream$1::load$($String* name, bool initialize) {
	$loadClass(ClassLoaderObjectOutputStream$1, name, initialize, &_ClassLoaderObjectOutputStream$1_ClassInfo_, allocate$ClassLoaderObjectOutputStream$1);
	return class$;
}

$Class* ClassLoaderObjectOutputStream$1::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun