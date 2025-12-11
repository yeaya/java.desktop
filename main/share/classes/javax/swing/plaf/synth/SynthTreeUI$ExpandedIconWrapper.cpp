#include <javax/swing/plaf/synth/SynthTreeUI$ExpandedIconWrapper.h>

#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthTreeUI.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthTreeUI = ::javax::swing::plaf::synth::SynthTreeUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTreeUI$ExpandedIconWrapper_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTreeUI$ExpandedIconWrapper, this$0)},
	{}
};

$MethodInfo _SynthTreeUI$ExpandedIconWrapper_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthTreeUI;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTreeUI$ExpandedIconWrapper::*)($SynthTreeUI*)>(&SynthTreeUI$ExpandedIconWrapper::init$))},
	{"getIconHeight", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC},
	{"getIconWidth", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthTreeUI$ExpandedIconWrapper_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTreeUI$ExpandedIconWrapper", "javax.swing.plaf.synth.SynthTreeUI", "ExpandedIconWrapper", $PRIVATE},
	{}
};

$ClassInfo _SynthTreeUI$ExpandedIconWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthTreeUI$ExpandedIconWrapper",
	"java.lang.Object",
	"javax.swing.plaf.synth.SynthIcon",
	_SynthTreeUI$ExpandedIconWrapper_FieldInfo_,
	_SynthTreeUI$ExpandedIconWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTreeUI$ExpandedIconWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTreeUI"
};

$Object* allocate$SynthTreeUI$ExpandedIconWrapper($Class* clazz) {
	return $of($alloc(SynthTreeUI$ExpandedIconWrapper));
}

void SynthTreeUI$ExpandedIconWrapper::init$($SynthTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthTreeUI$ExpandedIconWrapper::paintIcon($SynthContext* context$renamed, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, context$renamed);
	if (context == nullptr) {
		$assign(context, this->this$0->getContext($($SynthTreeUI::access$100(this->this$0))));
		$SynthGraphicsUtils::paintIcon($($SynthTreeUI::access$200(this->this$0)), context, g, x, y, w, h);
	} else {
		$SynthGraphicsUtils::paintIcon($($SynthTreeUI::access$300(this->this$0)), context, g, x, y, w, h);
	}
}

int32_t SynthTreeUI$ExpandedIconWrapper::getIconWidth($SynthContext* context$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, context$renamed);
	int32_t width = 0;
	if (context == nullptr) {
		$assign(context, this->this$0->getContext($($SynthTreeUI::access$400(this->this$0))));
		width = $SynthGraphicsUtils::getIconWidth($($SynthTreeUI::access$500(this->this$0)), context);
	} else {
		width = $SynthGraphicsUtils::getIconWidth($($SynthTreeUI::access$600(this->this$0)), context);
	}
	return width;
}

int32_t SynthTreeUI$ExpandedIconWrapper::getIconHeight($SynthContext* context$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, context$renamed);
	int32_t height = 0;
	if (context == nullptr) {
		$assign(context, this->this$0->getContext($($SynthTreeUI::access$700(this->this$0))));
		height = $SynthGraphicsUtils::getIconHeight($($SynthTreeUI::access$800(this->this$0)), context);
	} else {
		height = $SynthGraphicsUtils::getIconHeight($($SynthTreeUI::access$900(this->this$0)), context);
	}
	return height;
}

SynthTreeUI$ExpandedIconWrapper::SynthTreeUI$ExpandedIconWrapper() {
}

$Class* SynthTreeUI$ExpandedIconWrapper::load$($String* name, bool initialize) {
	$loadClass(SynthTreeUI$ExpandedIconWrapper, name, initialize, &_SynthTreeUI$ExpandedIconWrapper_ClassInfo_, allocate$SynthTreeUI$ExpandedIconWrapper);
	return class$;
}

$Class* SynthTreeUI$ExpandedIconWrapper::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax