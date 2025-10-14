#include <JFileChooserCombolistSelection$1.h>

#include <JFileChooserCombolistSelection.h>
#include <Sysout4JFileChooserCombolistSelection.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $JFileChooserCombolistSelection = ::JFileChooserCombolistSelection;
using $Sysout4JFileChooserCombolistSelection = ::Sysout4JFileChooserCombolistSelection;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _JFileChooserCombolistSelection$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JFileChooserCombolistSelection$1::*)()>(&JFileChooserCombolistSelection$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JFileChooserCombolistSelection$1_EnclosingMethodInfo_ = {
	"JFileChooserCombolistSelection",
	"init",
	"()V"
};

$InnerClassInfo _JFileChooserCombolistSelection$1_InnerClassesInfo_[] = {
	{"JFileChooserCombolistSelection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JFileChooserCombolistSelection$1_ClassInfo_ = {
	$ACC_SUPER,
	"JFileChooserCombolistSelection$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JFileChooserCombolistSelection$1_MethodInfo_,
	nullptr,
	&_JFileChooserCombolistSelection$1_EnclosingMethodInfo_,
	_JFileChooserCombolistSelection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JFileChooserCombolistSelection"
};

$Object* allocate$JFileChooserCombolistSelection$1($Class* clazz) {
	return $of($alloc(JFileChooserCombolistSelection$1));
}

void JFileChooserCombolistSelection$1::init$() {
}

void JFileChooserCombolistSelection$1::run() {
	$var($StringArray, instructions, $new($StringArray, {"Activate the \"Look in\" combobox\'s popup by clicking on its arrow button.Then navigate in it using keyboard (ie UP and DOWN arrow keys).When navigating, take a notice, if the contents of the file list changes.If yes, then press \"Fail\", otherwise press \"Passed\"."_s}));
	$Sysout4JFileChooserCombolistSelection::createDialogWithInstructions(instructions);
	$Sysout4JFileChooserCombolistSelection::printInstructions(instructions);
}

JFileChooserCombolistSelection$1::JFileChooserCombolistSelection$1() {
}

$Class* JFileChooserCombolistSelection$1::load$($String* name, bool initialize) {
	$loadClass(JFileChooserCombolistSelection$1, name, initialize, &_JFileChooserCombolistSelection$1_ClassInfo_, allocate$JFileChooserCombolistSelection$1);
	return class$;
}

$Class* JFileChooserCombolistSelection$1::class$ = nullptr;