#include <javax/swing/plaf/basic/BasicFileChooserUI$ApproveSelectionAction.h>

#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/regex/PatternSyntaxException.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$GlobFilter.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef ACTION_APPROVE_SELECTION

using $FileArray = $Array<::java::io::File>;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $PatternSyntaxException = ::java::util::regex::PatternSyntaxException;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $BasicFileChooserUI$GlobFilter = ::javax::swing::plaf::basic::BasicFileChooserUI$GlobFilter;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $FilePane = ::sun::swing::FilePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI$ApproveSelectionAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$ApproveSelectionAction, this$0)},
	{}
};

$MethodInfo _BasicFileChooserUI$ApproveSelectionAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicFileChooserUI$ApproveSelectionAction::*)($BasicFileChooserUI*)>(&BasicFileChooserUI$ApproveSelectionAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicFileChooserUI$ApproveSelectionAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$ApproveSelectionAction", "javax.swing.plaf.basic.BasicFileChooserUI", "ApproveSelectionAction", $PROTECTED},
	{}
};

$ClassInfo _BasicFileChooserUI$ApproveSelectionAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$ApproveSelectionAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicFileChooserUI$ApproveSelectionAction_FieldInfo_,
	_BasicFileChooserUI$ApproveSelectionAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI$ApproveSelectionAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$ApproveSelectionAction($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$ApproveSelectionAction));
}

void BasicFileChooserUI$ApproveSelectionAction::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$init($FilePane);
	$AbstractAction::init$($FilePane::ACTION_APPROVE_SELECTION);
}

void BasicFileChooserUI$ApproveSelectionAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->isDirectorySelected()) {
		$var($File, dir, this->this$0->getDirectory());
		if (dir != nullptr) {
			try {
				$assign(dir, $ShellFolder::getNormalizedFile(dir));
			} catch ($IOException& ex) {
			}
			this->this$0->changeDirectory(dir);
			return;
		}
	}
	$var($JFileChooser, chooser, this->this$0->getFileChooser());
	$var($String, filename, this->this$0->getFileName());
	$var($FileSystemView, fs, $nc(chooser)->getFileSystemView());
	$var($File, dir, chooser->getCurrentDirectory());
	if (filename == nullptr || $nc(filename)->length() == 0) {
		this->this$0->resetGlobFilter();
		return;
	}
	$var($File, selectedFile, nullptr);
	$var($FileArray, selectedFiles, nullptr);
	$init($File);
	if ($File::separatorChar == u'/') {
		if ($nc(filename)->startsWith("~/"_s)) {
			$var($String, var$0, $($System::getProperty("user.home"_s)));
			$assign(filename, $concat(var$0, $(filename->substring(1))));
		} else if (filename->equals("~"_s)) {
			$assign(filename, $System::getProperty("user.home"_s));
		}
	}
	bool var$3 = chooser->isMultiSelectionEnabled();
	bool var$2 = var$3 && $nc(filename)->length() > 1;
	bool var$1 = var$2 && filename->charAt(0) == u'\"';
	if (var$1 && filename->charAt(filename->length() - 1) == u'\"') {
		$var($List, fList, $new($ArrayList));
		$var($StringArray, files, $(filename->substring(1, filename->length() - 1))->split("\" \""_s));
		$Arrays::sort(files);
		$var($FileArray, children, nullptr);
		int32_t childIndex = 0;
		{
			$var($StringArray, arr$, files);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, str, arr$->get(i$));
				{
					$var($File, file, $nc(fs)->createFileObject(str));
					if (!$nc(file)->isAbsolute()) {
						if (children == nullptr) {
							$assign(children, fs->getFiles(dir, false));
							$Arrays::sort(children);
						}
						for (int32_t k = 0; k < $nc(children)->length; ++k) {
							int32_t l = $mod((childIndex + k), children->length);
							if ($nc($($nc(children->get(l))->getName()))->equals(str)) {
								$assign(file, children->get(l));
								childIndex = l + 1;
								break;
							}
						}
					}
					fList->add(file);
				}
			}
		}
		if (!fList->isEmpty()) {
			$assign(selectedFiles, $fcast($FileArray, fList->toArray($$new($FileArray, fList->size()))));
		}
		this->this$0->resetGlobFilter();
	} else {
		$assign(selectedFile, $nc(fs)->createFileObject(filename));
		if (!$nc(selectedFile)->isAbsolute()) {
			$assign(selectedFile, fs->getChild(dir, filename));
		}
		$var($FileFilter, currentFilter, chooser->getFileFilter());
		bool var$4 = !$nc(selectedFile)->exists();
		if (var$4 && $BasicFileChooserUI::isGlobPattern(filename)) {
			this->this$0->changeDirectory($(selectedFile->getParentFile()));
			if (this->this$0->globFilter == nullptr) {
				$set(this->this$0, globFilter, $new($BasicFileChooserUI$GlobFilter, this->this$0));
			}
			try {
				$nc(this->this$0->globFilter)->setPattern($(selectedFile->getName()));
				if (!($instanceOf($BasicFileChooserUI$GlobFilter, currentFilter))) {
					$set(this->this$0, actualFileFilter, currentFilter);
				}
				chooser->setFileFilter(nullptr);
				chooser->setFileFilter(this->this$0->globFilter);
				return;
			} catch ($PatternSyntaxException& pse) {
			}
		}
		this->this$0->resetGlobFilter();
		bool isDir = (selectedFile != nullptr && selectedFile->isDirectory());
		bool isTrav = (selectedFile != nullptr && chooser->isTraversable(selectedFile));
		bool isDirSelEnabled = chooser->isDirectorySelectionEnabled();
		bool isFileSelEnabled = chooser->isFileSelectionEnabled();
		bool var$5 = e != nullptr;
		if (var$5) {
			int32_t var$6 = e->getModifiers();
			var$5 = ((int32_t)(var$6 & (uint32_t)$nc($($Toolkit::getDefaultToolkit()))->getMenuShortcutKeyMask())) != 0;
		}
		bool isCtrl = (var$5);
		if (isDir && isTrav && (isCtrl || !isDirSelEnabled)) {
			this->this$0->changeDirectory(selectedFile);
			return;
		} else if ((isDir || !isFileSelEnabled) && (!isDir || !isDirSelEnabled) && (!isDirSelEnabled || selectedFile->exists())) {
			$assign(selectedFile, nullptr);
		}
	}
	if (selectedFiles != nullptr || selectedFile != nullptr) {
		if (selectedFiles != nullptr || chooser->isMultiSelectionEnabled()) {
			if (selectedFiles == nullptr) {
				$assign(selectedFiles, $new($FileArray, {selectedFile}));
			}
			chooser->setSelectedFiles(selectedFiles);
			chooser->setSelectedFiles(selectedFiles);
		} else {
			chooser->setSelectedFile(selectedFile);
		}
		chooser->approveSelection();
	} else {
		if (chooser->isMultiSelectionEnabled()) {
			chooser->setSelectedFiles(nullptr);
		} else {
			chooser->setSelectedFile(nullptr);
		}
		chooser->cancelSelection();
	}
}

BasicFileChooserUI$ApproveSelectionAction::BasicFileChooserUI$ApproveSelectionAction() {
}

$Class* BasicFileChooserUI$ApproveSelectionAction::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$ApproveSelectionAction, name, initialize, &_BasicFileChooserUI$ApproveSelectionAction_ClassInfo_, allocate$BasicFileChooserUI$ApproveSelectionAction);
	return class$;
}

$Class* BasicFileChooserUI$ApproveSelectionAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax