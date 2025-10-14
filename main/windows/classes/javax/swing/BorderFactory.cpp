#include <javax/swing/BorderFactory.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/Paint.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/border/EtchedBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/border/MatteBorder.h>
#include <javax/swing/border/SoftBevelBorder.h>
#include <javax/swing/border/StrokeBorder.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef CAP_ROUND
#undef CAP_SQUARE
#undef JOIN_MITER
#undef JOIN_ROUND
#undef LOWERED
#undef RAISED

using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Paint = ::java::awt::Paint;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $EtchedBorder = ::javax::swing::border::EtchedBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $MatteBorder = ::javax::swing::border::MatteBorder;
using $SoftBevelBorder = ::javax::swing::border::SoftBevelBorder;
using $StrokeBorder = ::javax::swing::border::StrokeBorder;
using $TitledBorder = ::javax::swing::border::TitledBorder;

namespace javax {
	namespace swing {

$FieldInfo _BorderFactory_FieldInfo_[] = {
	{"sharedRaisedBevel", "Ljavax/swing/border/Border;", nullptr, $STATIC | $FINAL, $staticField(BorderFactory, sharedRaisedBevel)},
	{"sharedLoweredBevel", "Ljavax/swing/border/Border;", nullptr, $STATIC | $FINAL, $staticField(BorderFactory, sharedLoweredBevel)},
	{"sharedSoftRaisedBevel", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(BorderFactory, sharedSoftRaisedBevel)},
	{"sharedSoftLoweredBevel", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(BorderFactory, sharedSoftLoweredBevel)},
	{"sharedEtchedBorder", "Ljavax/swing/border/Border;", nullptr, $STATIC | $FINAL, $staticField(BorderFactory, sharedEtchedBorder)},
	{"sharedRaisedEtchedBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(BorderFactory, sharedRaisedEtchedBorder)},
	{"emptyBorder", "Ljavax/swing/border/Border;", nullptr, $STATIC | $FINAL, $staticField(BorderFactory, emptyBorder)},
	{"sharedDashedBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(BorderFactory, sharedDashedBorder)},
	{}
};

$MethodInfo _BorderFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BorderFactory::*)()>(&BorderFactory::init$))},
	{"createBevelBorder", "(I)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)(int32_t)>(&BorderFactory::createBevelBorder))},
	{"createBevelBorder", "(ILjava/awt/Color;Ljava/awt/Color;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)(int32_t,$Color*,$Color*)>(&BorderFactory::createBevelBorder))},
	{"createBevelBorder", "(ILjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)(int32_t,$Color*,$Color*,$Color*,$Color*)>(&BorderFactory::createBevelBorder))},
	{"createCompoundBorder", "()Ljavax/swing/border/CompoundBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CompoundBorder*(*)()>(&BorderFactory::createCompoundBorder))},
	{"createCompoundBorder", "(Ljavax/swing/border/Border;Ljavax/swing/border/Border;)Ljavax/swing/border/CompoundBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CompoundBorder*(*)($Border*,$Border*)>(&BorderFactory::createCompoundBorder))},
	{"createDashedBorder", "(Ljava/awt/Paint;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)($Paint*)>(&BorderFactory::createDashedBorder))},
	{"createDashedBorder", "(Ljava/awt/Paint;FF)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)($Paint*,float,float)>(&BorderFactory::createDashedBorder))},
	{"createDashedBorder", "(Ljava/awt/Paint;FFFZ)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)($Paint*,float,float,float,bool)>(&BorderFactory::createDashedBorder))},
	{"createEmptyBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BorderFactory::createEmptyBorder))},
	{"createEmptyBorder", "(IIII)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)(int32_t,int32_t,int32_t,int32_t)>(&BorderFactory::createEmptyBorder))},
	{"createEtchedBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BorderFactory::createEtchedBorder))},
	{"createEtchedBorder", "(Ljava/awt/Color;Ljava/awt/Color;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)($Color*,$Color*)>(&BorderFactory::createEtchedBorder))},
	{"createEtchedBorder", "(I)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)(int32_t)>(&BorderFactory::createEtchedBorder))},
	{"createEtchedBorder", "(ILjava/awt/Color;Ljava/awt/Color;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)(int32_t,$Color*,$Color*)>(&BorderFactory::createEtchedBorder))},
	{"createLineBorder", "(Ljava/awt/Color;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)($Color*)>(&BorderFactory::createLineBorder))},
	{"createLineBorder", "(Ljava/awt/Color;I)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)($Color*,int32_t)>(&BorderFactory::createLineBorder))},
	{"createLineBorder", "(Ljava/awt/Color;IZ)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)($Color*,int32_t,bool)>(&BorderFactory::createLineBorder))},
	{"createLoweredBevelBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BorderFactory::createLoweredBevelBorder))},
	{"createLoweredSoftBevelBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BorderFactory::createLoweredSoftBevelBorder))},
	{"createMatteBorder", "(IIIILjava/awt/Color;)Ljavax/swing/border/MatteBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MatteBorder*(*)(int32_t,int32_t,int32_t,int32_t,$Color*)>(&BorderFactory::createMatteBorder))},
	{"createMatteBorder", "(IIIILjavax/swing/Icon;)Ljavax/swing/border/MatteBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MatteBorder*(*)(int32_t,int32_t,int32_t,int32_t,$Icon*)>(&BorderFactory::createMatteBorder))},
	{"createRaisedBevelBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BorderFactory::createRaisedBevelBorder))},
	{"createRaisedSoftBevelBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BorderFactory::createRaisedSoftBevelBorder))},
	{"createSharedBevel", "(I)Ljavax/swing/border/Border;", nullptr, $STATIC, $method(static_cast<$Border*(*)(int32_t)>(&BorderFactory::createSharedBevel))},
	{"createSoftBevelBorder", "(I)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)(int32_t)>(&BorderFactory::createSoftBevelBorder))},
	{"createSoftBevelBorder", "(ILjava/awt/Color;Ljava/awt/Color;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)(int32_t,$Color*,$Color*)>(&BorderFactory::createSoftBevelBorder))},
	{"createSoftBevelBorder", "(ILjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)(int32_t,$Color*,$Color*,$Color*,$Color*)>(&BorderFactory::createSoftBevelBorder))},
	{"createStrokeBorder", "(Ljava/awt/BasicStroke;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)($BasicStroke*)>(&BorderFactory::createStrokeBorder))},
	{"createStrokeBorder", "(Ljava/awt/BasicStroke;Ljava/awt/Paint;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)($BasicStroke*,$Paint*)>(&BorderFactory::createStrokeBorder))},
	{"createTitledBorder", "(Ljava/lang/String;)Ljavax/swing/border/TitledBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TitledBorder*(*)($String*)>(&BorderFactory::createTitledBorder))},
	{"createTitledBorder", "(Ljavax/swing/border/Border;)Ljavax/swing/border/TitledBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TitledBorder*(*)($Border*)>(&BorderFactory::createTitledBorder))},
	{"createTitledBorder", "(Ljavax/swing/border/Border;Ljava/lang/String;)Ljavax/swing/border/TitledBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TitledBorder*(*)($Border*,$String*)>(&BorderFactory::createTitledBorder))},
	{"createTitledBorder", "(Ljavax/swing/border/Border;Ljava/lang/String;II)Ljavax/swing/border/TitledBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TitledBorder*(*)($Border*,$String*,int32_t,int32_t)>(&BorderFactory::createTitledBorder))},
	{"createTitledBorder", "(Ljavax/swing/border/Border;Ljava/lang/String;IILjava/awt/Font;)Ljavax/swing/border/TitledBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TitledBorder*(*)($Border*,$String*,int32_t,int32_t,$Font*)>(&BorderFactory::createTitledBorder))},
	{"createTitledBorder", "(Ljavax/swing/border/Border;Ljava/lang/String;IILjava/awt/Font;Ljava/awt/Color;)Ljavax/swing/border/TitledBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TitledBorder*(*)($Border*,$String*,int32_t,int32_t,$Font*,$Color*)>(&BorderFactory::createTitledBorder))},
	{}
};

$ClassInfo _BorderFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.BorderFactory",
	"java.lang.Object",
	nullptr,
	_BorderFactory_FieldInfo_,
	_BorderFactory_MethodInfo_
};

$Object* allocate$BorderFactory($Class* clazz) {
	return $of($alloc(BorderFactory));
}

$Border* BorderFactory::sharedRaisedBevel = nullptr;
$Border* BorderFactory::sharedLoweredBevel = nullptr;
$Border* BorderFactory::sharedSoftRaisedBevel = nullptr;
$Border* BorderFactory::sharedSoftLoweredBevel = nullptr;
$Border* BorderFactory::sharedEtchedBorder = nullptr;
$Border* BorderFactory::sharedRaisedEtchedBorder = nullptr;
$Border* BorderFactory::emptyBorder = nullptr;
$Border* BorderFactory::sharedDashedBorder = nullptr;

void BorderFactory::init$() {
}

$Border* BorderFactory::createLineBorder($Color* color) {
	$init(BorderFactory);
	return $new($LineBorder, color, 1);
}

$Border* BorderFactory::createLineBorder($Color* color, int32_t thickness) {
	$init(BorderFactory);
	return $new($LineBorder, color, thickness);
}

$Border* BorderFactory::createLineBorder($Color* color, int32_t thickness, bool rounded) {
	$init(BorderFactory);
	return $new($LineBorder, color, thickness, rounded);
}

$Border* BorderFactory::createRaisedBevelBorder() {
	$init(BorderFactory);
	return createSharedBevel($BevelBorder::RAISED);
}

$Border* BorderFactory::createLoweredBevelBorder() {
	$init(BorderFactory);
	return createSharedBevel($BevelBorder::LOWERED);
}

$Border* BorderFactory::createBevelBorder(int32_t type) {
	$init(BorderFactory);
	return createSharedBevel(type);
}

$Border* BorderFactory::createBevelBorder(int32_t type, $Color* highlight, $Color* shadow) {
	$init(BorderFactory);
	return $new($BevelBorder, type, highlight, shadow);
}

$Border* BorderFactory::createBevelBorder(int32_t type, $Color* highlightOuter, $Color* highlightInner, $Color* shadowOuter, $Color* shadowInner) {
	$init(BorderFactory);
	return $new($BevelBorder, type, highlightOuter, highlightInner, shadowOuter, shadowInner);
}

$Border* BorderFactory::createSharedBevel(int32_t type) {
	$init(BorderFactory);
	if (type == $BevelBorder::RAISED) {
		return BorderFactory::sharedRaisedBevel;
	} else if (type == $BevelBorder::LOWERED) {
		return BorderFactory::sharedLoweredBevel;
	}
	return nullptr;
}

$Border* BorderFactory::createRaisedSoftBevelBorder() {
	$init(BorderFactory);
	if (BorderFactory::sharedSoftRaisedBevel == nullptr) {
		$assignStatic(BorderFactory::sharedSoftRaisedBevel, $new($SoftBevelBorder, $BevelBorder::RAISED));
	}
	return BorderFactory::sharedSoftRaisedBevel;
}

$Border* BorderFactory::createLoweredSoftBevelBorder() {
	$init(BorderFactory);
	if (BorderFactory::sharedSoftLoweredBevel == nullptr) {
		$assignStatic(BorderFactory::sharedSoftLoweredBevel, $new($SoftBevelBorder, $BevelBorder::LOWERED));
	}
	return BorderFactory::sharedSoftLoweredBevel;
}

$Border* BorderFactory::createSoftBevelBorder(int32_t type) {
	$init(BorderFactory);
	if (type == $BevelBorder::RAISED) {
		return createRaisedSoftBevelBorder();
	}
	if (type == $BevelBorder::LOWERED) {
		return createLoweredSoftBevelBorder();
	}
	return nullptr;
}

$Border* BorderFactory::createSoftBevelBorder(int32_t type, $Color* highlight, $Color* shadow) {
	$init(BorderFactory);
	return $new($SoftBevelBorder, type, highlight, shadow);
}

$Border* BorderFactory::createSoftBevelBorder(int32_t type, $Color* highlightOuter, $Color* highlightInner, $Color* shadowOuter, $Color* shadowInner) {
	$init(BorderFactory);
	return $new($SoftBevelBorder, type, highlightOuter, highlightInner, shadowOuter, shadowInner);
}

$Border* BorderFactory::createEtchedBorder() {
	$init(BorderFactory);
	return BorderFactory::sharedEtchedBorder;
}

$Border* BorderFactory::createEtchedBorder($Color* highlight, $Color* shadow) {
	$init(BorderFactory);
	return $new($EtchedBorder, highlight, shadow);
}

$Border* BorderFactory::createEtchedBorder(int32_t type) {
	$init(BorderFactory);
	switch (type) {
	case $EtchedBorder::RAISED:
		{
			if (BorderFactory::sharedRaisedEtchedBorder == nullptr) {
				$assignStatic(BorderFactory::sharedRaisedEtchedBorder, $new($EtchedBorder, $EtchedBorder::RAISED));
			}
			return BorderFactory::sharedRaisedEtchedBorder;
		}
	case $EtchedBorder::LOWERED:
		{
			return BorderFactory::sharedEtchedBorder;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "type must be one of EtchedBorder.RAISED or EtchedBorder.LOWERED"_s);
		}
	}
}

$Border* BorderFactory::createEtchedBorder(int32_t type, $Color* highlight, $Color* shadow) {
	$init(BorderFactory);
	return $new($EtchedBorder, type, highlight, shadow);
}

$TitledBorder* BorderFactory::createTitledBorder($String* title) {
	$init(BorderFactory);
	return $new($TitledBorder, title);
}

$TitledBorder* BorderFactory::createTitledBorder($Border* border) {
	$init(BorderFactory);
	return $new($TitledBorder, border);
}

$TitledBorder* BorderFactory::createTitledBorder($Border* border, $String* title) {
	$init(BorderFactory);
	return $new($TitledBorder, border, title);
}

$TitledBorder* BorderFactory::createTitledBorder($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition) {
	$init(BorderFactory);
	return $new($TitledBorder, border, title, titleJustification, titlePosition);
}

$TitledBorder* BorderFactory::createTitledBorder($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, $Font* titleFont) {
	$init(BorderFactory);
	return $new($TitledBorder, border, title, titleJustification, titlePosition, titleFont);
}

$TitledBorder* BorderFactory::createTitledBorder($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, $Font* titleFont, $Color* titleColor) {
	$init(BorderFactory);
	return $new($TitledBorder, border, title, titleJustification, titlePosition, titleFont, titleColor);
}

$Border* BorderFactory::createEmptyBorder() {
	$init(BorderFactory);
	return BorderFactory::emptyBorder;
}

$Border* BorderFactory::createEmptyBorder(int32_t top, int32_t left, int32_t bottom, int32_t right) {
	$init(BorderFactory);
	return $new($EmptyBorder, top, left, bottom, right);
}

$CompoundBorder* BorderFactory::createCompoundBorder() {
	$init(BorderFactory);
	return $new($CompoundBorder);
}

$CompoundBorder* BorderFactory::createCompoundBorder($Border* outsideBorder, $Border* insideBorder) {
	$init(BorderFactory);
	return $new($CompoundBorder, outsideBorder, insideBorder);
}

$MatteBorder* BorderFactory::createMatteBorder(int32_t top, int32_t left, int32_t bottom, int32_t right, $Color* color) {
	$init(BorderFactory);
	return $new($MatteBorder, top, left, bottom, right, color);
}

$MatteBorder* BorderFactory::createMatteBorder(int32_t top, int32_t left, int32_t bottom, int32_t right, $Icon* tileIcon) {
	$init(BorderFactory);
	return $new($MatteBorder, top, left, bottom, right, tileIcon);
}

$Border* BorderFactory::createStrokeBorder($BasicStroke* stroke) {
	$init(BorderFactory);
	return $new($StrokeBorder, stroke);
}

$Border* BorderFactory::createStrokeBorder($BasicStroke* stroke, $Paint* paint) {
	$init(BorderFactory);
	return $new($StrokeBorder, stroke, paint);
}

$Border* BorderFactory::createDashedBorder($Paint* paint) {
	$init(BorderFactory);
	return createDashedBorder(paint, 1.0f, 1.0f, 1.0f, false);
}

$Border* BorderFactory::createDashedBorder($Paint* paint, float length, float spacing) {
	$init(BorderFactory);
	return createDashedBorder(paint, 1.0f, length, spacing, false);
}

$Border* BorderFactory::createDashedBorder($Paint* paint, float thickness, float length, float spacing, bool rounded) {
	$init(BorderFactory);
	bool shared = !rounded && (paint == nullptr) && (thickness == 1.0f) && (length == 1.0f) && (spacing == 1.0f);
	if (shared && (BorderFactory::sharedDashedBorder != nullptr)) {
		return BorderFactory::sharedDashedBorder;
	}
	if (thickness < 1.0f) {
		$throwNew($IllegalArgumentException, "thickness is less than 1"_s);
	}
	if (length < 1.0f) {
		$throwNew($IllegalArgumentException, "length is less than 1"_s);
	}
	if (spacing < 0.0f) {
		$throwNew($IllegalArgumentException, "spacing is less than 0"_s);
	}
	int32_t cap = rounded ? $BasicStroke::CAP_ROUND : $BasicStroke::CAP_SQUARE;
	int32_t join = rounded ? $BasicStroke::JOIN_ROUND : $BasicStroke::JOIN_MITER;
	$var($floats, array, $new($floats, {
		thickness * (length - 1.0f),
		thickness * (spacing + 1.0f)
	}));
	$var($Border, border, createStrokeBorder($$new($BasicStroke, thickness, cap, join, thickness * 2.0f, array, 0.0f), paint));
	if (shared) {
		$assignStatic(BorderFactory::sharedDashedBorder, border);
	}
	return border;
}

void clinit$BorderFactory($Class* class$) {
	$assignStatic(BorderFactory::sharedRaisedBevel, $new($BevelBorder, $BevelBorder::RAISED));
	$assignStatic(BorderFactory::sharedLoweredBevel, $new($BevelBorder, $BevelBorder::LOWERED));
	$assignStatic(BorderFactory::sharedEtchedBorder, $new($EtchedBorder));
	$assignStatic(BorderFactory::emptyBorder, $new($EmptyBorder, 0, 0, 0, 0));
}

BorderFactory::BorderFactory() {
}

$Class* BorderFactory::load$($String* name, bool initialize) {
	$loadClass(BorderFactory, name, initialize, &_BorderFactory_ClassInfo_, clinit$BorderFactory, allocate$BorderFactory);
	return class$;
}

$Class* BorderFactory::class$ = nullptr;

	} // swing
} // javax