#include <javax/swing/plaf/synth/SynthIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthIcon_MethodInfo_[] = {
	{"getIconHeight", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SynthIcon_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.plaf.synth.SynthIcon",
	nullptr,
	"javax.swing.Icon",
	nullptr,
	_SynthIcon_MethodInfo_
};

$Object* allocate$SynthIcon($Class* clazz) {
	return $of($alloc(SynthIcon));
}

void SynthIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($Graphics, var$0, g);
	int32_t var$1 = x;
	int32_t var$2 = y;
	int32_t var$3 = getIconWidth();
	paintIcon(nullptr, var$0, var$1, var$2, var$3, getIconHeight());
}

int32_t SynthIcon::getIconWidth() {
	return getIconWidth(nullptr);
}

int32_t SynthIcon::getIconHeight() {
	return getIconHeight(nullptr);
}

$Class* SynthIcon::load$($String* name, bool initialize) {
	$loadClass(SynthIcon, name, initialize, &_SynthIcon_ClassInfo_, allocate$SynthIcon);
	return class$;
}

$Class* SynthIcon::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax