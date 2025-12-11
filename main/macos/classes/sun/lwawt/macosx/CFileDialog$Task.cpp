#include <sun/lwawt/macosx/CFileDialog$Task.h>

#include <java/awt/FileDialog.h>
#include <java/awt/Window.h>
#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/AWTAccessor$FileDialogAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/macosx/CFileDialog.h>
#include <sun/security/action/GetBooleanAction.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $FileDialog = ::java::awt::FileDialog;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$FileDialogAccessor = ::sun::awt::AWTAccessor$FileDialogAccessor;
using $CFileDialog = ::sun::lwawt::macosx::CFileDialog;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CFileDialog$Task_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CFileDialog;", nullptr, $FINAL | $SYNTHETIC, $field(CFileDialog$Task, this$0)},
	{}
};

$MethodInfo _CFileDialog$Task_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CFileDialog;)V", nullptr, $PRIVATE, $method(static_cast<void(CFileDialog$Task::*)($CFileDialog*)>(&CFileDialog$Task::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CFileDialog$Task_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CFileDialog$Task", "sun.lwawt.macosx.CFileDialog", "Task", $PRIVATE},
	{}
};

$ClassInfo _CFileDialog$Task_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CFileDialog$Task",
	"java.lang.Object",
	"java.lang.Runnable",
	_CFileDialog$Task_FieldInfo_,
	_CFileDialog$Task_MethodInfo_,
	nullptr,
	nullptr,
	_CFileDialog$Task_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CFileDialog"
};

$Object* allocate$CFileDialog$Task($Class* clazz) {
	return $of($alloc(CFileDialog$Task));
}

void CFileDialog$Task::init$($CFileDialog* this$0) {
	$set(this, this$0, this$0);
}

void CFileDialog$Task::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($Throwable, var$0, nullptr);
		try {
			bool navigateApps = !$nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "apple.awt.use-file-dialog-packages"_s)))))))->booleanValue();
			bool chooseDirectories = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "apple.awt.fileDialogForDirectories"_s)))))))->booleanValue();
			int32_t dialogMode = $nc(this->this$0->target)->getMode();
			$var($String, title, $nc(this->this$0->target)->getTitle());
			if (title == nullptr) {
				$assign(title, " "_s);
			}
			$var($String, var$1, title);
			int32_t var$2 = dialogMode;
			bool var$3 = $nc(this->this$0->target)->isMultipleMode();
			bool var$4 = navigateApps;
			bool var$5 = chooseDirectories;
			bool var$6 = $nc(this->this$0->target)->getFilenameFilter() != nullptr;
			$var($String, var$7, $nc(this->this$0->target)->getDirectory());
			$var($StringArray, userFileNames, this->this$0->nativeRunFileDialog(var$1, var$2, var$3, var$4, var$5, var$6, var$7, $($nc(this->this$0->target)->getFile())));
			$var($String, directory, nullptr);
			$var($String, file, nullptr);
			$var($FileArray, files, nullptr);
			if (userFileNames != nullptr) {
				int32_t filesNumber = userFileNames->length;
				$assign(files, $new($FileArray, filesNumber));
				for (int32_t i = 0; i < filesNumber; ++i) {
					files->set(i, $$new($File, userFileNames->get(i)));
				}
				$assign(directory, $nc(files->get(0))->getParent());
				if (!$nc(directory)->endsWith($File::separator)) {
					$assign(directory, $str({directory, $File::separator}));
				}
				$assign(file, $nc(files->get(0))->getName());
			}
			$var($AWTAccessor$FileDialogAccessor, accessor, $AWTAccessor::getFileDialogAccessor());
			$nc(accessor)->setDirectory(this->this$0->target, directory);
			accessor->setFile(this->this$0->target, file);
			accessor->setFiles(this->this$0->target, files);
		} catch ($Throwable& var$8) {
			$assign(var$0, var$8);
		} /*finally*/ {
			$nc(this->this$0->target)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

CFileDialog$Task::CFileDialog$Task() {
}

$Class* CFileDialog$Task::load$($String* name, bool initialize) {
	$loadClass(CFileDialog$Task, name, initialize, &_CFileDialog$Task_ClassInfo_, allocate$CFileDialog$Task);
	return class$;
}

$Class* CFileDialog$Task::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun