#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$DoubleClickListener.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $Point = ::java::awt::Point;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$DoubleClickListener_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$DoubleClickListener, this$0)},
	{"list", "Ljavax/swing/JList;", "Ljavax/swing/JList<*>;", 0, $field(GTKFileChooserUI$DoubleClickListener, list)},
	{}
};

$MethodInfo _GTKFileChooserUI$DoubleClickListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;Ljavax/swing/JList;)V", "(Ljavax/swing/JList<*>;)V", $PUBLIC, $method(static_cast<void(GTKFileChooserUI$DoubleClickListener::*)($GTKFileChooserUI*,$JList*)>(&GTKFileChooserUI$DoubleClickListener::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$DoubleClickListener_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DoubleClickListener", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "DoubleClickListener", 0},
	{}
};

$ClassInfo _GTKFileChooserUI$DoubleClickListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DoubleClickListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	_GTKFileChooserUI$DoubleClickListener_FieldInfo_,
	_GTKFileChooserUI$DoubleClickListener_MethodInfo_,
	nullptr,
	nullptr,
	_GTKFileChooserUI$DoubleClickListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$DoubleClickListener($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$DoubleClickListener));
}

void GTKFileChooserUI$DoubleClickListener::init$($GTKFileChooserUI* this$0, $JList* list) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
	$set(this, list, list);
}

void GTKFileChooserUI$DoubleClickListener::mouseClicked($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $SwingUtilities::isLeftMouseButton(e);
	if (var$0 && $nc(e)->getClickCount() == 2) {
		int32_t index = $nc(this->list)->locationToIndex($(e->getPoint()));
		if (index >= 0) {
			$var($File, f, $cast($File, $nc($($nc(this->list)->getModel()))->getElementAt(index)));
			try {
				$assign(f, $ShellFolder::getNormalizedFile(f));
			} catch ($IOException& ex) {
			}
			if ($nc($(this->this$0->getFileChooser()))->isTraversable(f)) {
				$nc(this->list)->clearSelection();
				if ($nc($($nc($(this->this$0->getFileChooser()))->getCurrentDirectory()))->equals(f)) {
					this->this$0->rescanCurrentDirectory($(this->this$0->getFileChooser()));
				} else {
					$nc($(this->this$0->getFileChooser()))->setCurrentDirectory(f);
				}
			} else {
				$nc($(this->this$0->getFileChooser()))->approveSelection();
			}
		}
	}
}

void GTKFileChooserUI$DoubleClickListener::mouseEntered($MouseEvent* evt) {
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

GTKFileChooserUI$DoubleClickListener::GTKFileChooserUI$DoubleClickListener() {
}

$Class* GTKFileChooserUI$DoubleClickListener::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$DoubleClickListener, name, initialize, &_GTKFileChooserUI$DoubleClickListener_ClassInfo_, allocate$GTKFileChooserUI$DoubleClickListener);
	return class$;
}

$Class* GTKFileChooserUI$DoubleClickListener::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com