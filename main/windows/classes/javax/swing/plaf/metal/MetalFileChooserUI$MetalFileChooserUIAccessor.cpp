#include <javax/swing/plaf/metal/MetalFileChooserUI$MetalFileChooserUIAccessor.h>

#include <java/awt/event/MouseListener.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

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
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;
using $FilePane$FileChooserUIAccessor = ::sun::swing::FilePane$FileChooserUIAccessor;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$MetalFileChooserUIAccessor_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$MetalFileChooserUIAccessor, this$0)},
	{}
};

$MethodInfo _MetalFileChooserUI$MetalFileChooserUIAccessor_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI$MetalFileChooserUIAccessor::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$MetalFileChooserUIAccessor::init$))},
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

$InnerClassInfo _MetalFileChooserUI$MetalFileChooserUIAccessor_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$MetalFileChooserUIAccessor", "javax.swing.plaf.metal.MetalFileChooserUI", "MetalFileChooserUIAccessor", $PRIVATE},
	{"sun.swing.FilePane$FileChooserUIAccessor", "sun.swing.FilePane", "FileChooserUIAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MetalFileChooserUI$MetalFileChooserUIAccessor_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$MetalFileChooserUIAccessor",
	"java.lang.Object",
	"sun.swing.FilePane$FileChooserUIAccessor",
	_MetalFileChooserUI$MetalFileChooserUIAccessor_FieldInfo_,
	_MetalFileChooserUI$MetalFileChooserUIAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_MetalFileChooserUI$MetalFileChooserUIAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$MetalFileChooserUIAccessor($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$MetalFileChooserUIAccessor));
}

void MetalFileChooserUI$MetalFileChooserUIAccessor::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

$JFileChooser* MetalFileChooserUI$MetalFileChooserUIAccessor::getFileChooser() {
	return this->this$0->getFileChooser();
}

$BasicDirectoryModel* MetalFileChooserUI$MetalFileChooserUIAccessor::getModel() {
	return this->this$0->getModel();
}

$JPanel* MetalFileChooserUI$MetalFileChooserUIAccessor::createList() {
	return this->this$0->createList($(getFileChooser()));
}

$JPanel* MetalFileChooserUI$MetalFileChooserUIAccessor::createDetailsView() {
	return this->this$0->createDetailsView($(getFileChooser()));
}

bool MetalFileChooserUI$MetalFileChooserUIAccessor::isDirectorySelected() {
	return $MetalFileChooserUI::access$000(this->this$0);
}

$File* MetalFileChooserUI$MetalFileChooserUIAccessor::getDirectory() {
	return $MetalFileChooserUI::access$100(this->this$0);
}

$Action* MetalFileChooserUI$MetalFileChooserUIAccessor::getChangeToParentDirectoryAction() {
	return this->this$0->getChangeToParentDirectoryAction();
}

$Action* MetalFileChooserUI$MetalFileChooserUIAccessor::getApproveSelectionAction() {
	return this->this$0->getApproveSelectionAction();
}

$Action* MetalFileChooserUI$MetalFileChooserUIAccessor::getNewFolderAction() {
	return this->this$0->getNewFolderAction();
}

$MouseListener* MetalFileChooserUI$MetalFileChooserUIAccessor::createDoubleClickListener($JList* list) {
	return $MetalFileChooserUI::access$200(this->this$0, $(getFileChooser()), list);
}

$ListSelectionListener* MetalFileChooserUI$MetalFileChooserUIAccessor::createListSelectionListener() {
	return this->this$0->createListSelectionListener($(getFileChooser()));
}

MetalFileChooserUI$MetalFileChooserUIAccessor::MetalFileChooserUI$MetalFileChooserUIAccessor() {
}

$Class* MetalFileChooserUI$MetalFileChooserUIAccessor::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$MetalFileChooserUIAccessor, name, initialize, &_MetalFileChooserUI$MetalFileChooserUIAccessor_ClassInfo_, allocate$MetalFileChooserUI$MetalFileChooserUIAccessor);
	return class$;
}

$Class* MetalFileChooserUI$MetalFileChooserUIAccessor::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax