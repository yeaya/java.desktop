#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$SynthFileChooserUIAccessor.h>

#include <java/awt/event/MouseListener.h>
#include <java/io/File.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
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
using $FilePane$FileChooserUIAccessor = ::sun::swing::FilePane$FileChooserUIAccessor;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$SynthFileChooserUIAccessor_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$SynthFileChooserUIAccessor, this$0)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$SynthFileChooserUIAccessor_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthFileChooserUIImpl$SynthFileChooserUIAccessor::*)($SynthFileChooserUIImpl*)>(&SynthFileChooserUIImpl$SynthFileChooserUIAccessor::init$))},
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

$InnerClassInfo _SynthFileChooserUIImpl$SynthFileChooserUIAccessor_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$SynthFileChooserUIAccessor", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "SynthFileChooserUIAccessor", $PRIVATE},
	{"sun.swing.FilePane$FileChooserUIAccessor", "sun.swing.FilePane", "FileChooserUIAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$SynthFileChooserUIAccessor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$SynthFileChooserUIAccessor",
	"java.lang.Object",
	"sun.swing.FilePane$FileChooserUIAccessor",
	_SynthFileChooserUIImpl$SynthFileChooserUIAccessor_FieldInfo_,
	_SynthFileChooserUIImpl$SynthFileChooserUIAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_SynthFileChooserUIImpl$SynthFileChooserUIAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$SynthFileChooserUIAccessor($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$SynthFileChooserUIAccessor));
}

void SynthFileChooserUIImpl$SynthFileChooserUIAccessor::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
}

$JFileChooser* SynthFileChooserUIImpl$SynthFileChooserUIAccessor::getFileChooser() {
	return this->this$0->getFileChooser();
}

$BasicDirectoryModel* SynthFileChooserUIImpl$SynthFileChooserUIAccessor::getModel() {
	return this->this$0->getModel();
}

$JPanel* SynthFileChooserUIImpl$SynthFileChooserUIAccessor::createList() {
	return nullptr;
}

$JPanel* SynthFileChooserUIImpl$SynthFileChooserUIAccessor::createDetailsView() {
	return nullptr;
}

bool SynthFileChooserUIImpl$SynthFileChooserUIAccessor::isDirectorySelected() {
	return $SynthFileChooserUIImpl::access$000(this->this$0);
}

$File* SynthFileChooserUIImpl$SynthFileChooserUIAccessor::getDirectory() {
	return $SynthFileChooserUIImpl::access$100(this->this$0);
}

$Action* SynthFileChooserUIImpl$SynthFileChooserUIAccessor::getChangeToParentDirectoryAction() {
	return this->this$0->getChangeToParentDirectoryAction();
}

$Action* SynthFileChooserUIImpl$SynthFileChooserUIAccessor::getApproveSelectionAction() {
	return this->this$0->getApproveSelectionAction();
}

$Action* SynthFileChooserUIImpl$SynthFileChooserUIAccessor::getNewFolderAction() {
	return this->this$0->getNewFolderAction();
}

$MouseListener* SynthFileChooserUIImpl$SynthFileChooserUIAccessor::createDoubleClickListener($JList* list) {
	return $SynthFileChooserUIImpl::access$200(this->this$0, $(getFileChooser()), list);
}

$ListSelectionListener* SynthFileChooserUIImpl$SynthFileChooserUIAccessor::createListSelectionListener() {
	return this->this$0->createListSelectionListener($(getFileChooser()));
}

SynthFileChooserUIImpl$SynthFileChooserUIAccessor::SynthFileChooserUIImpl$SynthFileChooserUIAccessor() {
}

$Class* SynthFileChooserUIImpl$SynthFileChooserUIAccessor::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$SynthFileChooserUIAccessor, name, initialize, &_SynthFileChooserUIImpl$SynthFileChooserUIAccessor_ClassInfo_, allocate$SynthFileChooserUIImpl$SynthFileChooserUIAccessor);
	return class$;
}

$Class* SynthFileChooserUIImpl$SynthFileChooserUIAccessor::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun