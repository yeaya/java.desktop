#include <com/sun/java/swing/plaf/motif/MotifBorders$MotifPopupMenuBorder.h>

#include <com/sun/java/swing/plaf/motif/MotifBorders.h>
#include <com/sun/java/swing/plaf/motif/MotifGraphicsUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/border/AbstractBorder.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef GROOVE_HEIGHT
#undef TEXT_SPACING

using $MotifBorders = ::com::sun::java::swing::plaf::motif::MotifBorders;
using $MotifGraphicsUtils = ::com::sun::java::swing::plaf::motif::MotifGraphicsUtils;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifBorders$MotifPopupMenuBorder_FieldInfo_[] = {
	{"font", "Ljava/awt/Font;", nullptr, $PROTECTED, $field(MotifBorders$MotifPopupMenuBorder, font)},
	{"background", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifBorders$MotifPopupMenuBorder, background)},
	{"foreground", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifBorders$MotifPopupMenuBorder, foreground)},
	{"shadowColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifBorders$MotifPopupMenuBorder, shadowColor)},
	{"highlightColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifBorders$MotifPopupMenuBorder, highlightColor)},
	{"TEXT_SPACING", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(MotifBorders$MotifPopupMenuBorder, TEXT_SPACING)},
	{"GROOVE_HEIGHT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(MotifBorders$MotifPopupMenuBorder, GROOVE_HEIGHT)},
	{}
};

$MethodInfo _MotifBorders$MotifPopupMenuBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Font;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifBorders$MotifPopupMenuBorder::*)($Font*,$Color*,$Color*,$Color*,$Color*)>(&MotifBorders$MotifPopupMenuBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifBorders$MotifPopupMenuBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifBorders$MotifPopupMenuBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "MotifPopupMenuBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifBorders$MotifPopupMenuBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifBorders$MotifPopupMenuBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MotifBorders$MotifPopupMenuBorder_FieldInfo_,
	_MotifBorders$MotifPopupMenuBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MotifBorders$MotifPopupMenuBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifBorders"
};

$Object* allocate$MotifBorders$MotifPopupMenuBorder($Class* clazz) {
	return $of($alloc(MotifBorders$MotifPopupMenuBorder));
}

int32_t MotifBorders$MotifPopupMenuBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MotifBorders$MotifPopupMenuBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MotifBorders$MotifPopupMenuBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MotifBorders$MotifPopupMenuBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MotifBorders$MotifPopupMenuBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MotifBorders$MotifPopupMenuBorder::init$($Font* titleFont, $Color* bgColor, $Color* fgColor, $Color* shadow, $Color* highlight) {
	$AbstractBorder::init$();
	$set(this, font, titleFont);
	$set(this, background, bgColor);
	$set(this, foreground, fgColor);
	$set(this, shadowColor, shadow);
	$set(this, highlightColor, highlight);
}

void MotifBorders$MotifPopupMenuBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (!($instanceOf($JPopupMenu, c))) {
		return;
	}
	$var($Font, origFont, $nc(g)->getFont());
	$var($Color, origColor, g->getColor());
	$var($JPopupMenu, popup, $cast($JPopupMenu, c));
	$var($String, title, $nc(popup)->getLabel());
	if (title == nullptr) {
		return;
	}
	g->setFont(this->font);
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(popup, g, this->font));
	int32_t fontHeight = $nc(fm)->getHeight();
	int32_t descent = fm->getDescent();
	int32_t ascent = fm->getAscent();
	$var($Point, textLoc, $new($Point));
	int32_t stringWidth = $SwingUtilities2::stringWidth(popup, fm, title);
	textLoc->y = y + ascent + MotifBorders$MotifPopupMenuBorder::TEXT_SPACING;
	textLoc->x = x + ((width - stringWidth) / 2);
	g->setColor(this->background);
	g->fillRect(textLoc->x - MotifBorders$MotifPopupMenuBorder::TEXT_SPACING, textLoc->y - (fontHeight - descent), stringWidth + (2 * MotifBorders$MotifPopupMenuBorder::TEXT_SPACING), fontHeight - descent);
	g->setColor(this->foreground);
	$SwingUtilities2::drawString(static_cast<$JComponent*>(popup), g, title, textLoc->x, textLoc->y);
	$MotifGraphicsUtils::drawGroove(g, x, textLoc->y + MotifBorders$MotifPopupMenuBorder::TEXT_SPACING, width, MotifBorders$MotifPopupMenuBorder::GROOVE_HEIGHT, this->shadowColor, this->highlightColor);
	g->setFont(origFont);
	g->setColor(origColor);
}

$Insets* MotifBorders$MotifPopupMenuBorder::getBorderInsets($Component* c, $Insets* insets) {
	if (!($instanceOf($JPopupMenu, c))) {
		return insets;
	}
	$var($FontMetrics, fm, nullptr);
	int32_t descent = 0;
	int32_t ascent = 16;
	$var($String, title, $nc(($cast($JPopupMenu, c)))->getLabel());
	if (title == nullptr) {
		$nc(insets)->left = (insets->top = (insets->right = (insets->bottom = 0)));
		return insets;
	}
	$assign(fm, $nc(c)->getFontMetrics(this->font));
	if (fm != nullptr) {
		descent = fm->getDescent();
		ascent = fm->getAscent();
	}
	$nc(insets)->top += ascent + descent + MotifBorders$MotifPopupMenuBorder::TEXT_SPACING + MotifBorders$MotifPopupMenuBorder::GROOVE_HEIGHT;
	return insets;
}

MotifBorders$MotifPopupMenuBorder::MotifBorders$MotifPopupMenuBorder() {
}

$Class* MotifBorders$MotifPopupMenuBorder::load$($String* name, bool initialize) {
	$loadClass(MotifBorders$MotifPopupMenuBorder, name, initialize, &_MotifBorders$MotifPopupMenuBorder_ClassInfo_, allocate$MotifBorders$MotifPopupMenuBorder);
	return class$;
}

$Class* MotifBorders$MotifPopupMenuBorder::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com