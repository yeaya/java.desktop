#include <FileChooserTest$1.h>

#include <FileChooserTest.h>
#include <Sysout4FileChooserTest.h>
#include <jcpp.h>

using $Sysout4FileChooserTest = ::Sysout4FileChooserTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _FileChooserTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileChooserTest$1::*)()>(&FileChooserTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileChooserTest$1_EnclosingMethodInfo_ = {
	"FileChooserTest",
	"init",
	"()V"
};

$InnerClassInfo _FileChooserTest$1_InnerClassesInfo_[] = {
	{"FileChooserTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileChooserTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"FileChooserTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_FileChooserTest$1_MethodInfo_,
	nullptr,
	&_FileChooserTest$1_EnclosingMethodInfo_,
	_FileChooserTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FileChooserTest"
};

$Object* allocate$FileChooserTest$1($Class* clazz) {
	return $of($alloc(FileChooserTest$1));
}

void FileChooserTest$1::init$() {
}

void FileChooserTest$1::run() {
	$var($StringArray, instructions, $new($StringArray, {
		"1) Create a folder with read only permissions by changing security permission through Security tabunder Folder->Properties menu to deny write permission to the newly created folder"_s,
		"2) Click on run test button.It will open a open dialog Navigate to the newly created read only folder"_s,
		"3) Click on the create new folder button in open dialog"_s,
		"4) If an error message does not pops uptest failed otherwise passed."_s,
		"5) Pressing Pass/Fail button will mark test as pass/fail and will shutdown JVM"_s,
		"6) Newly created folder permissions can now be restored back to default"_s
	}));
	$Sysout4FileChooserTest::createDialogWithInstructions(instructions);
	$Sysout4FileChooserTest::printInstructions(instructions);
}

FileChooserTest$1::FileChooserTest$1() {
}

$Class* FileChooserTest$1::load$($String* name, bool initialize) {
	$loadClass(FileChooserTest$1, name, initialize, &_FileChooserTest$1_ClassInfo_, allocate$FileChooserTest$1);
	return class$;
}

$Class* FileChooserTest$1::class$ = nullptr;