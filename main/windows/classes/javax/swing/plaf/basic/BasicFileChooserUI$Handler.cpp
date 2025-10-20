#include <javax/swing/plaf/basic/BasicFileChooserUI$Handler.h>

#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef FILES_ONLY

using $FileArray = $Array<::java::io::File>;
using $Point = ::java::awt::Point;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$Handler, this$0)},
	{"list", "Ljavax/swing/JList;", "Ljavax/swing/JList<*>;", 0, $field(BasicFileChooserUI$Handler, list)},
	{}
};

$MethodInfo _BasicFileChooserUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, 0, $method(static_cast<void(BasicFileChooserUI$Handler::*)($BasicFileChooserUI*)>(&BasicFileChooserUI$Handler::init$))},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;Ljavax/swing/JList;)V", "(Ljavax/swing/JList<*>;)V", 0, $method(static_cast<void(BasicFileChooserUI$Handler::*)($BasicFileChooserUI*,$JList*)>(&BasicFileChooserUI$Handler::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicFileChooserUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$Handler", "javax.swing.plaf.basic.BasicFileChooserUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicFileChooserUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$Handler",
	"java.lang.Object",
	"java.awt.event.MouseListener,javax.swing.event.ListSelectionListener",
	_BasicFileChooserUI$Handler_FieldInfo_,
	_BasicFileChooserUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$Handler($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$Handler));
}

int32_t BasicFileChooserUI$Handler::hashCode() {
	 return this->$MouseListener::hashCode();
}

bool BasicFileChooserUI$Handler::equals(Object$* arg0) {
	 return this->$MouseListener::equals(arg0);
}

$Object* BasicFileChooserUI$Handler::clone() {
	 return this->$MouseListener::clone();
}

$String* BasicFileChooserUI$Handler::toString() {
	 return this->$MouseListener::toString();
}

void BasicFileChooserUI$Handler::finalize() {
	this->$MouseListener::finalize();
}

void BasicFileChooserUI$Handler::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicFileChooserUI$Handler::init$($BasicFileChooserUI* this$0, $JList* list) {
	$set(this, this$0, this$0);
	$set(this, list, list);
}

void BasicFileChooserUI$Handler::mouseClicked($MouseEvent* evt) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = this->list != nullptr && $SwingUtilities::isLeftMouseButton(evt);
	if (var$0 && ($nc(evt)->getClickCount() % 2 == 0)) {
		int32_t index = $SwingUtilities2::loc2IndexFileList(this->list, $(evt->getPoint()));
		if (index >= 0) {
			$var($File, f, $cast($File, $nc($($nc(this->list)->getModel()))->getElementAt(index)));
			try {
				$assign(f, $ShellFolder::getNormalizedFile(f));
			} catch ($IOException&) {
				$catch();
			}
			if ($nc($(this->this$0->getFileChooser()))->isTraversable(f)) {
				$nc(this->list)->clearSelection();
				this->this$0->changeDirectory(f);
			} else {
				$nc($(this->this$0->getFileChooser()))->approveSelection();
			}
		}
	}
}

void BasicFileChooserUI$Handler::mouseEntered($MouseEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if (this->list != nullptr) {
		$var($TransferHandler, th1, $nc($(this->this$0->getFileChooser()))->getTransferHandler());
		$var($TransferHandler, th2, $nc(this->list)->getTransferHandler());
		if (th1 != th2) {
			$nc(this->list)->setTransferHandler(th1);
		}
		bool var$0 = $nc($(this->this$0->getFileChooser()))->getDragEnabled();
		if (var$0 != $nc(this->list)->getDragEnabled()) {
			$nc(this->list)->setDragEnabled($nc($(this->this$0->getFileChooser()))->getDragEnabled());
		}
	}
}

void BasicFileChooserUI$Handler::mouseExited($MouseEvent* evt) {
}

void BasicFileChooserUI$Handler::mousePressed($MouseEvent* evt) {
}

void BasicFileChooserUI$Handler::mouseReleased($MouseEvent* evt) {
}

void BasicFileChooserUI$Handler::valueChanged($ListSelectionEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(evt)->getValueIsAdjusting()) {
		$var($JFileChooser, chooser, this->this$0->getFileChooser());
		$var($FileSystemView, fsv, $nc(chooser)->getFileSystemView());
		$var($JList, list, $cast($JList, evt->getSource()));
		int32_t fsm = chooser->getFileSelectionMode();
		bool useSetDirectory = this->this$0->usesSingleFilePane && (fsm == $JFileChooser::FILES_ONLY);
		if (chooser->isMultiSelectionEnabled()) {
			$var($FileArray, files, nullptr);
			$var($ObjectArray, objects, $nc(list)->getSelectedValues());
			if (objects != nullptr) {
				bool var$1 = objects->length == 1 && $nc(($cast($File, objects->get(0))))->isDirectory();
				bool var$0 = var$1 && chooser->isTraversable(($cast($File, objects->get(0))));
				if (var$0 && (useSetDirectory || !$nc(fsv)->isFileSystem(($cast($File, objects->get(0)))))) {
					this->this$0->setDirectorySelected(true);
					this->this$0->setDirectory(($cast($File, objects->get(0))));
				} else {
					$var($ArrayList, fList, $new($ArrayList, objects->length));
					{
						$var($ObjectArray, arr$, objects);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Object0, object, arr$->get(i$));
							{
								$var($File, f, $cast($File, object));
								bool isDir = $nc(f)->isDirectory();
								bool var$2 = (chooser->isFileSelectionEnabled() && !isDir);
								if (!var$2) {
									bool var$3 = chooser->isDirectorySelectionEnabled();
									var$2 = (var$3 && fsv->isFileSystem(f) && isDir);
								}
								if (var$2) {
									fList->add(f);
								}
							}
						}
					}
					if (fList->size() > 0) {
						$assign(files, $fcast($FileArray, fList->toArray($$new($FileArray, fList->size()))));
					}
					this->this$0->setDirectorySelected(false);
				}
			}
			chooser->setSelectedFiles(files);
		} else {
			$var($File, file, $cast($File, $nc(list)->getSelectedValue()));
			bool var$5 = file != nullptr && file->isDirectory();
			bool var$4 = var$5 && chooser->isTraversable(file);
			if (var$4 && (useSetDirectory || !$nc(fsv)->isFileSystem(file))) {
				this->this$0->setDirectorySelected(true);
				this->this$0->setDirectory(file);
				if (this->this$0->usesSingleFilePane) {
					chooser->setSelectedFile(nullptr);
				}
			} else {
				this->this$0->setDirectorySelected(false);
				if (file != nullptr) {
					chooser->setSelectedFile(file);
				}
			}
		}
	}
}

BasicFileChooserUI$Handler::BasicFileChooserUI$Handler() {
}

$Class* BasicFileChooserUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$Handler, name, initialize, &_BasicFileChooserUI$Handler_ClassInfo_, allocate$BasicFileChooserUI$Handler);
	return class$;
}

$Class* BasicFileChooserUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax