#include <javax/swing/plaf/synth/SynthContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef NULL_PAINTER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $JComponent = ::javax::swing::JComponent;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthContext_FieldInfo_[] = {
	{"component", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(SynthContext, component)},
	{"region", "Ljavax/swing/plaf/synth/Region;", nullptr, $PRIVATE, $field(SynthContext, region)},
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthContext, style)},
	{"state", "I", nullptr, $PRIVATE, $field(SynthContext, state)},
	{}
};

$MethodInfo _SynthContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthContext::*)()>(&SynthContext::init$))},
	{"<init>", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;Ljavax/swing/plaf/synth/SynthStyle;I)V", nullptr, $PUBLIC, $method(static_cast<void(SynthContext::*)($JComponent*,$Region*,$SynthStyle*,int32_t)>(&SynthContext::init$))},
	{"getComponent", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"getComponentState", "()I", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/SynthStyle;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $STATIC, $method(static_cast<SynthContext*(*)($JComponent*,$SynthStyle*,int32_t)>(&SynthContext::getContext))},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;Ljavax/swing/plaf/synth/SynthStyle;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $STATIC, $method(static_cast<SynthContext*(*)($JComponent*,$Region*,$SynthStyle*,int32_t)>(&SynthContext::getContext))},
	{"getPainter", "()Ljavax/swing/plaf/synth/SynthPainter;", nullptr, 0},
	{"getRegion", "()Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC},
	{"getStyle", "()Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PUBLIC},
	{"isSubregion", "()Z", nullptr, 0},
	{"setComponentState", "(I)V", nullptr, 0},
	{"setStyle", "(Ljavax/swing/plaf/synth/SynthStyle;)V", nullptr, 0},
	{}
};

$ClassInfo _SynthContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthContext",
	"java.lang.Object",
	nullptr,
	_SynthContext_FieldInfo_,
	_SynthContext_MethodInfo_
};

$Object* allocate$SynthContext($Class* clazz) {
	return $of($alloc(SynthContext));
}

SynthContext* SynthContext::getContext($JComponent* c, $SynthStyle* style, int32_t state) {
	return getContext(c, $($SynthLookAndFeel::getRegion(c)), style, state);
}

SynthContext* SynthContext::getContext($JComponent* component, $Region* region, $SynthStyle* style, int32_t state) {
	$var(SynthContext, context, $new(SynthContext));
	$set(context, component, component);
	$set(context, region, region);
	$set(context, style, style);
	context->state = state;
	return context;
}

void SynthContext::init$() {
}

void SynthContext::init$($JComponent* component, $Region* region, $SynthStyle* style, int32_t state) {
	if (component == nullptr || region == nullptr || style == nullptr) {
		$throwNew($NullPointerException, "You must supply a non-null component, region and style"_s);
	}
	$set(this, component, component);
	$set(this, region, region);
	$set(this, style, style);
	this->state = state;
}

$JComponent* SynthContext::getComponent() {
	return this->component;
}

$Region* SynthContext::getRegion() {
	return this->region;
}

bool SynthContext::isSubregion() {
	return $nc($(getRegion()))->isSubregion();
}

void SynthContext::setStyle($SynthStyle* style) {
	$set(this, style, style);
}

$SynthStyle* SynthContext::getStyle() {
	return this->style;
}

void SynthContext::setComponentState(int32_t state) {
	this->state = state;
}

int32_t SynthContext::getComponentState() {
	return this->state;
}

$SynthPainter* SynthContext::getPainter() {
	$useLocalCurrentObjectStackCache();
	$var($SynthPainter, painter, $nc($(getStyle()))->getPainter(this));
	if (painter != nullptr) {
		return painter;
	}
	$init($SynthPainter);
	return $SynthPainter::NULL_PAINTER;
}

SynthContext::SynthContext() {
}

$Class* SynthContext::load$($String* name, bool initialize) {
	$loadClass(SynthContext, name, initialize, &_SynthContext_ClassInfo_, allocate$SynthContext);
	return class$;
}

$Class* SynthContext::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax