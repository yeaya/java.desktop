#include <bug6342301$1.h>

#include <bug6342301$HackedFileChooser.h>
#include <bug6342301.h>
#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FileChooserUI.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

using $bug6342301 = ::bug6342301;
using $bug6342301$HackedFileChooser = ::bug6342301$HackedFileChooser;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FileChooserUI = ::javax::swing::plaf::FileChooserUI;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

$MethodInfo _bug6342301$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6342301$1::*)()>(&bug6342301$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6342301$1_EnclosingMethodInfo_ = {
	"bug6342301",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6342301$1_InnerClassesInfo_[] = {
	{"bug6342301$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6342301$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6342301$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6342301$1_MethodInfo_,
	nullptr,
	&_bug6342301$1_EnclosingMethodInfo_,
	_bug6342301$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6342301"
};

$Object* allocate$bug6342301$1($Class* clazz) {
	return $of($alloc(bug6342301$1));
}

void bug6342301$1::init$() {
}

void bug6342301$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($bug6342301$HackedFileChooser, openChooser, $new($bug6342301$HackedFileChooser));
	openChooser->setUI($$new($MetalFileChooserUI, openChooser));
	$init($bug6342301);
	openChooser->setCurrentDirectory($$new($File, $bug6342301::tempDir));
}

bug6342301$1::bug6342301$1() {
}

$Class* bug6342301$1::load$($String* name, bool initialize) {
	$loadClass(bug6342301$1, name, initialize, &_bug6342301$1_ClassInfo_, allocate$bug6342301$1);
	return class$;
}

$Class* bug6342301$1::class$ = nullptr;