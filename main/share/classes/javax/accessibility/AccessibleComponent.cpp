#include <javax/accessibility/AccessibleComponent.h>

#include <java/awt/Color.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <javax/accessibility/Accessible.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleComponent_MethodInfo_[] = {
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $ABSTRACT},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isShowing", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isVisible", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"requestFocus", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleComponent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleComponent",
	nullptr,
	nullptr,
	nullptr,
	_AccessibleComponent_MethodInfo_
};

$Object* allocate$AccessibleComponent($Class* clazz) {
	return $of($alloc(AccessibleComponent));
}

$Class* AccessibleComponent::load$($String* name, bool initialize) {
	$loadClass(AccessibleComponent, name, initialize, &_AccessibleComponent_ClassInfo_, allocate$AccessibleComponent);
	return class$;
}

$Class* AccessibleComponent::class$ = nullptr;

	} // accessibility
} // javax