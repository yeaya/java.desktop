#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$AlignedLabel.h>

#include <java/awt/Dimension.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

#undef LEFT_ALIGNMENT

using $SynthFileChooserUIImpl$AlignedLabelArray = $Array<::sun::swing::plaf::synth::SynthFileChooserUIImpl$AlignedLabel>;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$AlignedLabel_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$AlignedLabel, this$0)},
	{"group", "[Lsun/swing/plaf/synth/SynthFileChooserUIImpl$AlignedLabel;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl$AlignedLabel, group)},
	{"maxWidth", "I", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl$AlignedLabel, maxWidth)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$AlignedLabel_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, 0, $method(static_cast<void(SynthFileChooserUIImpl$AlignedLabel::*)($SynthFileChooserUIImpl*)>(&SynthFileChooserUIImpl$AlignedLabel::init$))},
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(SynthFileChooserUIImpl$AlignedLabel::*)($SynthFileChooserUIImpl*,$String*)>(&SynthFileChooserUIImpl$AlignedLabel::init$))},
	{"getMaxWidth", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthFileChooserUIImpl$AlignedLabel::*)()>(&SynthFileChooserUIImpl$AlignedLabel::getMaxWidth))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSuperPreferredWidth", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthFileChooserUIImpl$AlignedLabel::*)()>(&SynthFileChooserUIImpl$AlignedLabel::getSuperPreferredWidth))},
	{}
};

$InnerClassInfo _SynthFileChooserUIImpl$AlignedLabel_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$AlignedLabel", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "AlignedLabel", $PRIVATE},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$AlignedLabel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$AlignedLabel",
	"javax.swing.JLabel",
	nullptr,
	_SynthFileChooserUIImpl$AlignedLabel_FieldInfo_,
	_SynthFileChooserUIImpl$AlignedLabel_MethodInfo_,
	nullptr,
	nullptr,
	_SynthFileChooserUIImpl$AlignedLabel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$AlignedLabel($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$AlignedLabel));
}

void SynthFileChooserUIImpl$AlignedLabel::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
	$JLabel::init$();
	this->maxWidth = 0;
	$init($JComponent);
	setAlignmentX($JComponent::LEFT_ALIGNMENT);
}

void SynthFileChooserUIImpl$AlignedLabel::init$($SynthFileChooserUIImpl* this$0, $String* text) {
	$set(this, this$0, this$0);
	$JLabel::init$(text);
	this->maxWidth = 0;
	$init($JComponent);
	setAlignmentX($JComponent::LEFT_ALIGNMENT);
}

$Dimension* SynthFileChooserUIImpl$AlignedLabel::getPreferredSize() {
	$var($Dimension, d, $JLabel::getPreferredSize());
	return $new($Dimension, getMaxWidth() + 11, $nc(d)->height);
}

int32_t SynthFileChooserUIImpl$AlignedLabel::getMaxWidth() {
	if (this->maxWidth == 0 && this->group != nullptr) {
		int32_t max = 0;
		for (int32_t i = 0; i < $nc(this->group)->length; ++i) {
			max = $Math::max($nc($nc(this->group)->get(i))->getSuperPreferredWidth(), max);
		}
		for (int32_t i = 0; i < $nc(this->group)->length; ++i) {
			$nc($nc(this->group)->get(i))->maxWidth = max;
		}
	}
	return this->maxWidth;
}

int32_t SynthFileChooserUIImpl$AlignedLabel::getSuperPreferredWidth() {
	return $nc($($JLabel::getPreferredSize()))->width;
}

SynthFileChooserUIImpl$AlignedLabel::SynthFileChooserUIImpl$AlignedLabel() {
}

$Class* SynthFileChooserUIImpl$AlignedLabel::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$AlignedLabel, name, initialize, &_SynthFileChooserUIImpl$AlignedLabel_ClassInfo_, allocate$SynthFileChooserUIImpl$AlignedLabel);
	return class$;
}

$Class* SynthFileChooserUIImpl$AlignedLabel::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun