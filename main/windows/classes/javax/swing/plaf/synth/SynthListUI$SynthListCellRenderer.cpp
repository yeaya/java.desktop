#include <javax/swing/plaf/synth/SynthListUI$SynthListCellRenderer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultListCellRenderer$UIResource.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <javax/swing/plaf/synth/SynthBorder.h>
#include <javax/swing/plaf/synth/SynthLabelUI.h>
#include <javax/swing/plaf/synth/SynthListUI.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $DefaultListCellRenderer$UIResource = ::javax::swing::DefaultListCellRenderer$UIResource;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LabelUI = ::javax::swing::plaf::LabelUI;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;
using $SynthBorder = ::javax::swing::plaf::synth::SynthBorder;
using $SynthLabelUI = ::javax::swing::plaf::synth::SynthLabelUI;
using $SynthListUI = ::javax::swing::plaf::synth::SynthListUI;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthListUI$SynthListCellRenderer_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthListUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthListUI$SynthListCellRenderer, this$0)},
	{}
};

$MethodInfo _SynthListUI$SynthListCellRenderer_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthListUI;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthListUI$SynthListCellRenderer::*)($SynthListUI*)>(&SynthListUI$SynthListCellRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthListUI$SynthListCellRenderer_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthListUI$SynthListCellRenderer", "javax.swing.plaf.synth.SynthListUI", "SynthListCellRenderer", $PRIVATE},
	{"javax.swing.DefaultListCellRenderer$UIResource", "javax.swing.DefaultListCellRenderer", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SynthListUI$SynthListCellRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthListUI$SynthListCellRenderer",
	"javax.swing.DefaultListCellRenderer$UIResource",
	nullptr,
	_SynthListUI$SynthListCellRenderer_FieldInfo_,
	_SynthListUI$SynthListCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_SynthListUI$SynthListCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthListUI"
};

$Object* allocate$SynthListUI$SynthListCellRenderer($Class* clazz) {
	return $of($alloc(SynthListUI$SynthListCellRenderer));
}

void SynthListUI$SynthListCellRenderer::init$($SynthListUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer$UIResource::init$();
}

$String* SynthListUI$SynthListCellRenderer::getName() {
	return "List.cellRenderer"_s;
}

void SynthListUI$SynthListCellRenderer::setBorder($Border* b) {
	if (this->this$0->useUIBorder || $instanceOf($SynthBorder, b)) {
		$DefaultListCellRenderer$UIResource::setBorder(b);
	}
}

$Component* SynthListUI$SynthListCellRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalCurrentObjectStackCache();
	if (!this->this$0->useListColors && (isSelected || cellHasFocus)) {
		$load($SynthLabelUI);
		$var($ComponentUI, var$0, $cast($SynthLabelUI, $SynthLookAndFeel::getUIOfType($(getUI()), $SynthLabelUI::class$)));
		bool var$1 = isSelected;
		bool var$2 = cellHasFocus;
		$SynthLookAndFeel::setSelectedUI(var$0, var$1, var$2, $nc(list)->isEnabled(), false);
	} else {
		$SynthLookAndFeel::resetSelectedUI();
	}
	$DefaultListCellRenderer$UIResource::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	return this;
}

void SynthListUI$SynthListCellRenderer::paint($Graphics* g) {
	$DefaultListCellRenderer$UIResource::paint(g);
	$SynthLookAndFeel::resetSelectedUI();
}

SynthListUI$SynthListCellRenderer::SynthListUI$SynthListCellRenderer() {
}

$Class* SynthListUI$SynthListCellRenderer::load$($String* name, bool initialize) {
	$loadClass(SynthListUI$SynthListCellRenderer, name, initialize, &_SynthListUI$SynthListCellRenderer_ClassInfo_, allocate$SynthListUI$SynthListCellRenderer);
	return class$;
}

$Class* SynthListUI$SynthListCellRenderer::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax