#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxRenderer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/File.h>
#include <java/lang/AssertionError.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxModel.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$IndentIcon.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $File = ::java::io::File;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;
using $SynthFileChooserUIImpl$DirectoryComboBoxModel = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$DirectoryComboBoxModel;
using $SynthFileChooserUIImpl$IndentIcon = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$IndentIcon;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$DirectoryComboBoxRenderer_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$DirectoryComboBoxRenderer, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SynthFileChooserUIImpl$DirectoryComboBoxRenderer, $assertionsDisabled)},
	{"delegate", "Ljavax/swing/ListCellRenderer;", "Ljavax/swing/ListCellRenderer<-Ljava/io/File;>;", $PRIVATE, $field(SynthFileChooserUIImpl$DirectoryComboBoxRenderer, delegate)},
	{"ii", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl$IndentIcon;", nullptr, 0, $field(SynthFileChooserUIImpl$DirectoryComboBoxRenderer, ii)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$DirectoryComboBoxRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;Ljavax/swing/ListCellRenderer;)V", "(Ljavax/swing/ListCellRenderer<-Ljava/io/File;>;)V", $PRIVATE, $method(static_cast<void(SynthFileChooserUIImpl$DirectoryComboBoxRenderer::*)($SynthFileChooserUIImpl*,$ListCellRenderer*)>(&SynthFileChooserUIImpl$DirectoryComboBoxRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/io/File;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<+Ljava/io/File;>;Ljava/io/File;IZZ)Ljava/awt/Component;", $PUBLIC},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _SynthFileChooserUIImpl$DirectoryComboBoxRenderer_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxRenderer", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "DirectoryComboBoxRenderer", $PRIVATE},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$DirectoryComboBoxRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxRenderer",
	"java.lang.Object",
	"javax.swing.ListCellRenderer",
	_SynthFileChooserUIImpl$DirectoryComboBoxRenderer_FieldInfo_,
	_SynthFileChooserUIImpl$DirectoryComboBoxRenderer_MethodInfo_,
	"Ljava/lang/Object;Ljavax/swing/ListCellRenderer<Ljava/io/File;>;",
	nullptr,
	_SynthFileChooserUIImpl$DirectoryComboBoxRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$DirectoryComboBoxRenderer($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$DirectoryComboBoxRenderer));
}

bool SynthFileChooserUIImpl$DirectoryComboBoxRenderer::$assertionsDisabled = false;

void SynthFileChooserUIImpl$DirectoryComboBoxRenderer::init$($SynthFileChooserUIImpl* this$0, $ListCellRenderer* delegate) {
	$set(this, this$0, this$0);
	$set(this, ii, $new($SynthFileChooserUIImpl$IndentIcon, this->this$0));
	$set(this, delegate, delegate);
}

$Component* SynthFileChooserUIImpl$DirectoryComboBoxRenderer::getListCellRendererComponent($JList* list, $File* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc(this->delegate)->getListCellRendererComponent(list, value, index, isSelected, cellHasFocus));
	if (!SynthFileChooserUIImpl$DirectoryComboBoxRenderer::$assertionsDisabled && !$instanceOf($JLabel, c)) {
		$throwNew($AssertionError);
	}
	$var($JLabel, label, $cast($JLabel, c));
	if (value == nullptr) {
		$nc(label)->setText(""_s);
		return label;
	}
	$nc(label)->setText($($nc($(this->this$0->getFileChooser()))->getName(value)));
	$var($Icon, icon, $nc($(this->this$0->getFileChooser()))->getIcon(value));
	$set($nc(this->ii), icon, icon);
	$nc(this->ii)->depth = $nc(this->this$0->directoryComboBoxModel)->getDepth(index);
	label->setIcon(this->ii);
	return label;
}

$Component* SynthFileChooserUIImpl$DirectoryComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	return this->getListCellRendererComponent(list, $cast($File, value), index, isSelected, cellHasFocus);
}

void clinit$SynthFileChooserUIImpl$DirectoryComboBoxRenderer($Class* class$) {
	$load($SynthFileChooserUIImpl);
	SynthFileChooserUIImpl$DirectoryComboBoxRenderer::$assertionsDisabled = !$SynthFileChooserUIImpl::class$->desiredAssertionStatus();
}

SynthFileChooserUIImpl$DirectoryComboBoxRenderer::SynthFileChooserUIImpl$DirectoryComboBoxRenderer() {
}

$Class* SynthFileChooserUIImpl$DirectoryComboBoxRenderer::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$DirectoryComboBoxRenderer, name, initialize, &_SynthFileChooserUIImpl$DirectoryComboBoxRenderer_ClassInfo_, clinit$SynthFileChooserUIImpl$DirectoryComboBoxRenderer, allocate$SynthFileChooserUIImpl$DirectoryComboBoxRenderer);
	return class$;
}

$Class* SynthFileChooserUIImpl$DirectoryComboBoxRenderer::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun