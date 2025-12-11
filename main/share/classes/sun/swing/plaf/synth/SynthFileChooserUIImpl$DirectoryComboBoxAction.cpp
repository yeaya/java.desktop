#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$DirectoryComboBoxAction_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$DirectoryComboBoxAction, this$0)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$DirectoryComboBoxAction_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, $PROTECTED, $method(static_cast<void(SynthFileChooserUIImpl$DirectoryComboBoxAction::*)($SynthFileChooserUIImpl*)>(&SynthFileChooserUIImpl$DirectoryComboBoxAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthFileChooserUIImpl$DirectoryComboBoxAction_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxAction", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "DirectoryComboBoxAction", $PROTECTED},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$DirectoryComboBoxAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxAction",
	"javax.swing.AbstractAction",
	nullptr,
	_SynthFileChooserUIImpl$DirectoryComboBoxAction_FieldInfo_,
	_SynthFileChooserUIImpl$DirectoryComboBoxAction_MethodInfo_,
	nullptr,
	nullptr,
	_SynthFileChooserUIImpl$DirectoryComboBoxAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$DirectoryComboBoxAction($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$DirectoryComboBoxAction));
}

void SynthFileChooserUIImpl$DirectoryComboBoxAction::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("DirectoryComboBoxAction"_s);
}

void SynthFileChooserUIImpl$DirectoryComboBoxAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$0->directoryComboBox)->hidePopup();
	$var($JComponent, cb, this->this$0->getDirectoryComboBox());
	if ($instanceOf($JComboBox, cb)) {
		$var($File, f, $cast($File, $nc(($cast($JComboBox, cb)))->getSelectedItem()));
		$nc($(this->this$0->getFileChooser()))->setCurrentDirectory(f);
	}
}

SynthFileChooserUIImpl$DirectoryComboBoxAction::SynthFileChooserUIImpl$DirectoryComboBoxAction() {
}

$Class* SynthFileChooserUIImpl$DirectoryComboBoxAction::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$DirectoryComboBoxAction, name, initialize, &_SynthFileChooserUIImpl$DirectoryComboBoxAction_ClassInfo_, allocate$SynthFileChooserUIImpl$DirectoryComboBoxAction);
	return class$;
}

$Class* SynthFileChooserUIImpl$DirectoryComboBoxAction::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun