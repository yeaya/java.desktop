#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$WindowsFileChooserUIAccessor.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/event/MouseListener.h>
#include <java/io/File.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $MouseListener = ::java::awt::event::MouseListener;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $FilePane$FileChooserUIAccessor = ::sun::swing::FilePane$FileChooserUIAccessor;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$WindowsFileChooserUIAccessor_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$WindowsFileChooserUIAccessor, this$0)},
	{}
};

$MethodInfo _WindowsFileChooserUI$WindowsFileChooserUIAccessor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI$WindowsFileChooserUIAccessor::*)($WindowsFileChooserUI*)>(&WindowsFileChooserUI$WindowsFileChooserUIAccessor::init$))},
	{"createDetailsView", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC},
	{"createDoubleClickListener", "(Ljavax/swing/JList;)Ljava/awt/event/MouseListener;", "(Ljavax/swing/JList<*>;)Ljava/awt/event/MouseListener;", $PUBLIC},
	{"createList", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC},
	{"createListSelectionListener", "()Ljavax/swing/event/ListSelectionListener;", nullptr, $PUBLIC},
	{"getApproveSelectionAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getChangeToParentDirectoryAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getDirectory", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"getFileChooser", "()Ljavax/swing/JFileChooser;", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/plaf/basic/BasicDirectoryModel;", nullptr, $PUBLIC},
	{"getNewFolderAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"isDirectorySelected", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsFileChooserUI$WindowsFileChooserUIAccessor_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$WindowsFileChooserUIAccessor", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "WindowsFileChooserUIAccessor", $PRIVATE},
	{"sun.swing.FilePane$FileChooserUIAccessor", "sun.swing.FilePane", "FileChooserUIAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WindowsFileChooserUI$WindowsFileChooserUIAccessor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$WindowsFileChooserUIAccessor",
	"java.lang.Object",
	"sun.swing.FilePane$FileChooserUIAccessor",
	_WindowsFileChooserUI$WindowsFileChooserUIAccessor_FieldInfo_,
	_WindowsFileChooserUI$WindowsFileChooserUIAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsFileChooserUI$WindowsFileChooserUIAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$WindowsFileChooserUIAccessor($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$WindowsFileChooserUIAccessor));
}

void WindowsFileChooserUI$WindowsFileChooserUIAccessor::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

$JFileChooser* WindowsFileChooserUI$WindowsFileChooserUIAccessor::getFileChooser() {
	return this->this$0->getFileChooser();
}

$BasicDirectoryModel* WindowsFileChooserUI$WindowsFileChooserUIAccessor::getModel() {
	return this->this$0->getModel();
}

$JPanel* WindowsFileChooserUI$WindowsFileChooserUIAccessor::createList() {
	return this->this$0->createList($(getFileChooser()));
}

$JPanel* WindowsFileChooserUI$WindowsFileChooserUIAccessor::createDetailsView() {
	return this->this$0->createDetailsView($(getFileChooser()));
}

bool WindowsFileChooserUI$WindowsFileChooserUIAccessor::isDirectorySelected() {
	return $WindowsFileChooserUI::access$000(this->this$0);
}

$File* WindowsFileChooserUI$WindowsFileChooserUIAccessor::getDirectory() {
	return $WindowsFileChooserUI::access$100(this->this$0);
}

$Action* WindowsFileChooserUI$WindowsFileChooserUIAccessor::getChangeToParentDirectoryAction() {
	return this->this$0->getChangeToParentDirectoryAction();
}

$Action* WindowsFileChooserUI$WindowsFileChooserUIAccessor::getApproveSelectionAction() {
	return this->this$0->getApproveSelectionAction();
}

$Action* WindowsFileChooserUI$WindowsFileChooserUIAccessor::getNewFolderAction() {
	return this->this$0->getNewFolderAction();
}

$MouseListener* WindowsFileChooserUI$WindowsFileChooserUIAccessor::createDoubleClickListener($JList* list) {
	return $WindowsFileChooserUI::access$200(this->this$0, $(getFileChooser()), list);
}

$ListSelectionListener* WindowsFileChooserUI$WindowsFileChooserUIAccessor::createListSelectionListener() {
	return this->this$0->createListSelectionListener($(getFileChooser()));
}

WindowsFileChooserUI$WindowsFileChooserUIAccessor::WindowsFileChooserUI$WindowsFileChooserUIAccessor() {
}

$Class* WindowsFileChooserUI$WindowsFileChooserUIAccessor::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$WindowsFileChooserUIAccessor, name, initialize, &_WindowsFileChooserUI$WindowsFileChooserUIAccessor_ClassInfo_, allocate$WindowsFileChooserUI$WindowsFileChooserUIAccessor);
	return class$;
}

$Class* WindowsFileChooserUI$WindowsFileChooserUIAccessor::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com