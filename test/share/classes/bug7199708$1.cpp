#include <bug7199708$1.h>

#include <bug7199708.h>
#include <java/awt/Component.h>
#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $bug7199708 = ::bug7199708;
using $Component = ::java::awt::Component;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFileChooser = ::javax::swing::JFileChooser;

$FieldInfo _bug7199708$1_FieldInfo_[] = {
	{"val$folder", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(bug7199708$1, val$folder)},
	{}
};

$MethodInfo _bug7199708$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", "()V", 0, $method(static_cast<void(bug7199708$1::*)($File*)>(&bug7199708$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7199708$1_EnclosingMethodInfo_ = {
	"bug7199708",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7199708$1_InnerClassesInfo_[] = {
	{"bug7199708$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7199708$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7199708$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug7199708$1_FieldInfo_,
	_bug7199708$1_MethodInfo_,
	nullptr,
	&_bug7199708$1_EnclosingMethodInfo_,
	_bug7199708$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7199708"
};

$Object* allocate$bug7199708$1($Class* clazz) {
	return $of($alloc(bug7199708$1));
}

void bug7199708$1::init$($File* val$folder) {
	$set(this, val$folder, val$folder);
}

void bug7199708$1::run() {
	$init($bug7199708);
	$assignStatic($bug7199708::fileChooser, $new($JFileChooser, this->val$folder));
	$nc($bug7199708::fileChooser)->showSaveDialog(nullptr);
}

bug7199708$1::bug7199708$1() {
}

$Class* bug7199708$1::load$($String* name, bool initialize) {
	$loadClass(bug7199708$1, name, initialize, &_bug7199708$1_ClassInfo_, allocate$bug7199708$1);
	return class$;
}

$Class* bug7199708$1::class$ = nullptr;