#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel$ColorTriangle.h>

#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel$ColorAction.h>
#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Math.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <jcpp.h>

#undef BLACK
#undef FOCUS_EVENT_MASK
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef MOUSE_DRAGGED
#undef MOUSE_EVENT_MASK
#undef MOUSE_MOTION_EVENT_MASK
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef PI
#undef TYPE_INT_ARGB
#undef WHITE

using $GTKColorChooserPanel = ::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel;
using $GTKColorChooserPanel$ColorAction = ::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel$ColorAction;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKColorChooserPanel$ColorTriangle_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKColorChooserPanel;", nullptr, $FINAL | $SYNTHETIC, $field(GTKColorChooserPanel$ColorTriangle, this$0)},
	{"wheelImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(GTKColorChooserPanel$ColorTriangle, wheelImage)},
	{"triangleImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(GTKColorChooserPanel$ColorTriangle, triangleImage)},
	{"angle", "D", nullptr, $PRIVATE, $field(GTKColorChooserPanel$ColorTriangle, angle)},
	{"flags", "I", nullptr, $PRIVATE, $field(GTKColorChooserPanel$ColorTriangle, flags)},
	{"circleX", "I", nullptr, $PRIVATE, $field(GTKColorChooserPanel$ColorTriangle, circleX)},
	{"circleY", "I", nullptr, $PRIVATE, $field(GTKColorChooserPanel$ColorTriangle, circleY)},
	{}
};

$MethodInfo _GTKColorChooserPanel$ColorTriangle_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKColorChooserPanel;)V", nullptr, $PUBLIC, $method(static_cast<void(GTKColorChooserPanel$ColorTriangle::*)($GTKColorChooserPanel*)>(&GTKColorChooserPanel$ColorTriangle::init$))},
	{"adjustHue", "(IIZ)Z", nullptr, $PRIVATE, $method(static_cast<bool(GTKColorChooserPanel$ColorTriangle::*)(int32_t,int32_t,bool)>(&GTKColorChooserPanel$ColorTriangle::adjustHue))},
	{"adjustSB", "(IIZ)Z", nullptr, 0},
	{"colorWheelLocationToRGB", "(IID)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GTKColorChooserPanel$ColorTriangle::*)(int32_t,int32_t,double)>(&GTKColorChooserPanel$ColorTriangle::colorWheelLocationToRGB))},
	{"focusTriangle", "()V", nullptr, 0},
	{"focusWheel", "()V", nullptr, 0},
	{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getColorX", "()I", nullptr, 0},
	{"getColorY", "()I", nullptr, 0},
	{"getGTKColorChooserPanel", "()Lcom/sun/java/swing/plaf/gtk/GTKColorChooserPanel;", nullptr, 0},
	{"getImage", "(I)Ljava/awt/Image;", nullptr, $PRIVATE, $method(static_cast<$Image*(GTKColorChooserPanel$ColorTriangle::*)(int32_t)>(&GTKColorChooserPanel$ColorTriangle::getImage))},
	{"getIndicatorSize", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(GTKColorChooserPanel$ColorTriangle::*)()>(&GTKColorChooserPanel$ColorTriangle::getIndicatorSize))},
	{"getTriangleCircumscribedRadius", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(GTKColorChooserPanel$ColorTriangle::*)()>(&GTKColorChooserPanel$ColorTriangle::getTriangleCircumscribedRadius))},
	{"getWheelImage", "(I)Ljava/awt/Image;", nullptr, $PRIVATE, $method(static_cast<$Image*(GTKColorChooserPanel$ColorTriangle::*)(int32_t)>(&GTKColorChooserPanel$ColorTriangle::getWheelImage))},
	{"getWheelRadius", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(GTKColorChooserPanel$ColorTriangle::*)()>(&GTKColorChooserPanel$ColorTriangle::getWheelRadius))},
	{"getWheelWidth", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(GTKColorChooserPanel$ColorTriangle::*)()>(&GTKColorChooserPanel$ColorTriangle::getWheelWidth))},
	{"getWheelXOrigin", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(GTKColorChooserPanel$ColorTriangle::*)()>(&GTKColorChooserPanel$ColorTriangle::getWheelXOrigin))},
	{"getWheelYOrigin", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(GTKColorChooserPanel$ColorTriangle::*)()>(&GTKColorChooserPanel$ColorTriangle::getWheelYOrigin))},
	{"incrementHue", "(Z)V", nullptr, 0},
	{"isSet", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(GTKColorChooserPanel$ColorTriangle::*)(int32_t)>(&GTKColorChooserPanel$ColorTriangle::isSet))},
	{"isWheelFocused", "()Z", nullptr, 0},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintTriangle", "(Ljava/awt/Graphics;ILjava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel$ColorTriangle::*)($Graphics*,int32_t,$Color*)>(&GTKColorChooserPanel$ColorTriangle::paintTriangle))},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"setAngleFromHue", "(F)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel$ColorTriangle::*)(float)>(&GTKColorChooserPanel$ColorTriangle::setAngleFromHue))},
	{"setColor", "(FFF)V", nullptr, $PUBLIC},
	{"setFlag", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel$ColorTriangle::*)(int32_t,bool)>(&GTKColorChooserPanel$ColorTriangle::setFlag))},
	{"setFocusType", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel$ColorTriangle::*)(int32_t)>(&GTKColorChooserPanel$ColorTriangle::setFocusType))},
	{"setHueAngle", "(D)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel$ColorTriangle::*)(double)>(&GTKColorChooserPanel$ColorTriangle::setHueAngle))},
	{"setSaturationAndBrightness", "(FF)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel$ColorTriangle::*)(float,float)>(&GTKColorChooserPanel$ColorTriangle::setSaturationAndBrightness))},
	{"setSaturationAndBrightness", "(FFII)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel$ColorTriangle::*)(float,float,int32_t,int32_t)>(&GTKColorChooserPanel$ColorTriangle::setSaturationAndBrightness))},
	{}
};

$InnerClassInfo _GTKColorChooserPanel$ColorTriangle_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$ColorTriangle", "com.sun.java.swing.plaf.gtk.GTKColorChooserPanel", "ColorTriangle", $PRIVATE},
	{}
};

$ClassInfo _GTKColorChooserPanel$ColorTriangle_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$ColorTriangle",
	"javax.swing.JPanel",
	nullptr,
	_GTKColorChooserPanel$ColorTriangle_FieldInfo_,
	_GTKColorChooserPanel$ColorTriangle_MethodInfo_,
	nullptr,
	nullptr,
	_GTKColorChooserPanel$ColorTriangle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel"
};

$Object* allocate$GTKColorChooserPanel$ColorTriangle($Class* clazz) {
	return $of($alloc(GTKColorChooserPanel$ColorTriangle));
}

void GTKColorChooserPanel$ColorTriangle::init$($GTKColorChooserPanel* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPanel::init$();
	enableEvents($AWTEvent::FOCUS_EVENT_MASK);
	enableEvents($AWTEvent::MOUSE_EVENT_MASK);
	enableEvents($AWTEvent::MOUSE_MOTION_EVENT_MASK);
	int32_t var$0 = getWheelRadius() * 2 + 2;
	setMinimumSize($$new($Dimension, var$0, getWheelRadius() * 2 + 2));
	int32_t var$1 = getWheelRadius() * 2 + 2;
	setPreferredSize($$new($Dimension, var$1, getWheelRadius() * 2 + 2));
	setFocusTraversalKeysEnabled(false);
	$nc($(getInputMap()))->put($($KeyStroke::getKeyStroke("UP"_s)), "up"_s);
	$nc($(getInputMap()))->put($($KeyStroke::getKeyStroke("DOWN"_s)), "down"_s);
	$nc($(getInputMap()))->put($($KeyStroke::getKeyStroke("LEFT"_s)), "left"_s);
	$nc($(getInputMap()))->put($($KeyStroke::getKeyStroke("RIGHT"_s)), "right"_s);
	$nc($(getInputMap()))->put($($KeyStroke::getKeyStroke("KP_UP"_s)), "up"_s);
	$nc($(getInputMap()))->put($($KeyStroke::getKeyStroke("KP_DOWN"_s)), "down"_s);
	$nc($(getInputMap()))->put($($KeyStroke::getKeyStroke("KP_LEFT"_s)), "left"_s);
	$nc($(getInputMap()))->put($($KeyStroke::getKeyStroke("KP_RIGHT"_s)), "right"_s);
	$nc($(getInputMap()))->put($($KeyStroke::getKeyStroke("TAB"_s)), "focusNext"_s);
	$nc($(getInputMap()))->put($($KeyStroke::getKeyStroke("shift TAB"_s)), "focusLast"_s);
	$var($ActionMap, map, $cast($ActionMap, $UIManager::get("GTKColorChooserPanel.actionMap"_s)));
	if (map == nullptr) {
		$assign(map, $new($ActionMapUIResource));
		map->put("left"_s, $$new($GTKColorChooserPanel$ColorAction, "left"_s, 2));
		map->put("right"_s, $$new($GTKColorChooserPanel$ColorAction, "right"_s, 3));
		map->put("up"_s, $$new($GTKColorChooserPanel$ColorAction, "up"_s, 0));
		map->put("down"_s, $$new($GTKColorChooserPanel$ColorAction, "down"_s, 1));
		map->put("focusNext"_s, $$new($GTKColorChooserPanel$ColorAction, "focusNext"_s, 4));
		map->put("focusLast"_s, $$new($GTKColorChooserPanel$ColorAction, "focusLast"_s, 5));
		$nc($($UIManager::getLookAndFeelDefaults()))->put("GTKColorChooserPanel.actionMap"_s, map);
	}
	$SwingUtilities::replaceUIActionMap(this, map);
}

$GTKColorChooserPanel* GTKColorChooserPanel$ColorTriangle::getGTKColorChooserPanel() {
	return this->this$0;
}

void GTKColorChooserPanel$ColorTriangle::focusWheel() {
	setFocusType(1);
}

void GTKColorChooserPanel$ColorTriangle::focusTriangle() {
	setFocusType(2);
}

bool GTKColorChooserPanel$ColorTriangle::isWheelFocused() {
	return isSet(16);
}

void GTKColorChooserPanel$ColorTriangle::setColor(float h, float s, float b) {
	if (isSet(8)) {
		return;
	}
	setAngleFromHue(h);
	setSaturationAndBrightness(s, b);
}

$Color* GTKColorChooserPanel$ColorTriangle::getColor() {
	return this->this$0->getColor();
}

int32_t GTKColorChooserPanel$ColorTriangle::getColorX() {
	int32_t var$0 = this->circleX + getIndicatorSize() / 2;
	return var$0 - getWheelXOrigin();
}

int32_t GTKColorChooserPanel$ColorTriangle::getColorY() {
	int32_t var$0 = this->circleY + getIndicatorSize() / 2;
	return var$0 - getWheelYOrigin();
}

void GTKColorChooserPanel$ColorTriangle::processEvent($AWTEvent* e) {
	bool var$0 = $nc(e)->getID() == $MouseEvent::MOUSE_PRESSED;
	if (!var$0) {
		bool var$2 = isSet(2);
		bool var$1 = (var$2 || isSet(4));
		var$0 = (var$1 && $nc(e)->getID() == $MouseEvent::MOUSE_DRAGGED);
	}
	if (var$0) {
		int32_t size = getWheelRadius();
		int32_t x = $nc(($cast($MouseEvent, e)))->getX() - size;
		int32_t y = ($cast($MouseEvent, e))->getY() - size;
		if (!hasFocus()) {
			requestFocus();
		}
		bool var$3 = !isSet(4);
		if (var$3 && adjustHue(x, y, e->getID() == $MouseEvent::MOUSE_PRESSED)) {
			setFlag(2, true);
			setFocusType(1);
		} else if (adjustSB(x, y, e->getID() == $MouseEvent::MOUSE_PRESSED)) {
			setFlag(4, true);
			setFocusType(2);
		} else {
			setFocusType(2);
		}
	} else if (e->getID() == $MouseEvent::MOUSE_RELEASED) {
		setFlag(4, false);
		setFlag(2, false);
	} else if (e->getID() == $FocusEvent::FOCUS_LOST) {
		setFocusType(0);
	} else if (e->getID() == $FocusEvent::FOCUS_GAINED) {
		bool var$4 = !isSet(32);
		if (var$4 && !isSet(16)) {
			setFlag(16, true);
			setFocusType(1);
		}
		repaint();
	}
	$JPanel::processEvent(e);
}

void GTKColorChooserPanel$ColorTriangle::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$JPanel::paintComponent(g);
	int32_t size = getWheelRadius();
	int32_t width = getWheelWidth();
	$var($Image, image, getImage(size));
	$var($Image, var$0, image);
	int32_t var$1 = getWheelXOrigin() - size;
	$nc(g)->drawImage(var$0, var$1, getWheelYOrigin() - size, nullptr);
	bool var$2 = hasFocus();
	if (var$2 && isSet(16)) {
		$init($Color);
		g->setColor($Color::BLACK);
		int32_t var$3 = getWheelXOrigin() - size;
		g->drawOval(var$3, getWheelYOrigin() - size, 2 * size, 2 * size);
		int32_t var$4 = getWheelXOrigin() - size + width;
		g->drawOval(var$4, getWheelYOrigin() - size + width, 2 * (size - width), 2 * (size - width));
	}
	$init($Math);
	bool var$5 = $Math::toDegrees($Math::PI * 2 - this->angle) <= 20;
	if (var$5 || $Math::toDegrees($Math::PI * 2 - this->angle) >= 201) {
		$init($Color);
		g->setColor($Color::WHITE);
	} else {
		$init($Color);
		g->setColor($Color::BLACK);
	}
	int32_t lineX0 = $cast(int32_t, ($Math::cos(this->angle) * size));
	int32_t lineY0 = $cast(int32_t, ($Math::sin(this->angle) * size));
	int32_t lineX1 = $cast(int32_t, ($Math::cos(this->angle) * (size - width)));
	int32_t lineY1 = $cast(int32_t, ($Math::sin(this->angle) * (size - width)));
	g->drawLine(lineX0 + size, lineY0 + size, lineX1 + size, lineY1 + size);
	bool var$6 = hasFocus();
	if (var$6 && isSet(32)) {
		$var($Graphics, g2, g->create());
		int32_t innerR = getTriangleCircumscribedRadius();
		int32_t a = $cast(int32_t, (3 * innerR / $Math::sqrt((double)3)));
		int32_t var$7 = getWheelXOrigin();
		$nc(g2)->translate(var$7, getWheelYOrigin());
		$nc(($cast($Graphics2D, g2)))->rotate(this->angle + $Math::PI / 2);
		$init($Color);
		g2->setColor($Color::BLACK);
		g2->drawLine(0, -innerR, a / 2, innerR / 2);
		g2->drawLine(a / 2, innerR / 2, -a / 2, innerR / 2);
		g2->drawLine(-a / 2, innerR / 2, 0, -innerR);
		g2->dispose();
	}
	$init($Color);
	g->setColor($Color::BLACK);
	int32_t var$8 = this->circleX;
	int32_t var$9 = this->circleY;
	int32_t var$10 = getIndicatorSize() - 1;
	g->drawOval(var$8, var$9, var$10, getIndicatorSize() - 1);
	g->setColor($Color::WHITE);
	int32_t var$11 = this->circleX + 1;
	int32_t var$12 = this->circleY + 1;
	int32_t var$13 = getIndicatorSize() - 3;
	g->drawOval(var$11, var$12, var$13, getIndicatorSize() - 3);
}

$Image* GTKColorChooserPanel$ColorTriangle::getImage(int32_t size) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !isSet(1) && this->wheelImage != nullptr;
	if (var$0 && $nc(this->wheelImage)->getWidth(nullptr) == size * 2) {
		return this->wheelImage;
	}
	if (this->wheelImage == nullptr || $nc(this->wheelImage)->getWidth(nullptr) != size) {
		$set(this, wheelImage, getWheelImage(size));
	}
	int32_t innerR = getTriangleCircumscribedRadius();
	int32_t triangleSize = $cast(int32_t, (innerR * 3.0 / 2.0));
	int32_t a = $cast(int32_t, (2 * triangleSize / $Math::sqrt((double)3)));
	if (this->triangleImage == nullptr || $nc(this->triangleImage)->getWidth(nullptr) != a) {
		$set(this, triangleImage, $new($BufferedImage, a, a, $BufferedImage::TYPE_INT_ARGB));
	}
	$var($Graphics, g, $nc(this->triangleImage)->getGraphics());
	$nc(g)->setColor($$new($Color, 0, 0, 0, 0));
	g->fillRect(0, 0, a, a);
	g->translate(a / 2, 0);
	paintTriangle(g, triangleSize, $(getColor()));
	g->translate(-a / 2, 0);
	g->dispose();
	$assign(g, $nc(this->wheelImage)->getGraphics());
	g->setColor($$new($Color, 0, 0, 0, 0));
	int32_t var$1 = getWheelWidth();
	int32_t var$2 = getWheelWidth();
	int32_t var$3 = 2 * (size - getWheelWidth());
	g->fillOval(var$1, var$2, var$3, 2 * (size - getWheelWidth()));
	double rotate = $Math::toRadians(-30.0) + this->angle;
	g->translate(size, size);
	$nc(($cast($Graphics2D, g)))->rotate(rotate);
	g->drawImage(this->triangleImage, -a / 2, getWheelWidth() - size, nullptr);
	$nc(($cast($Graphics2D, g)))->rotate(-rotate);
	g->translate(a / 2, size - getWheelWidth());
	setFlag(1, false);
	return this->wheelImage;
}

void GTKColorChooserPanel$ColorTriangle::paintTriangle($Graphics* g, int32_t size, $Color* color) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(color)->getRed();
	int32_t var$1 = color->getGreen();
	$var($floats, colors, $Color::RGBtoHSB(var$0, var$1, color->getBlue(), nullptr));
	float hue = $nc(colors)->get(0);
	double dSize = (double)size;
	for (int32_t y = 0; y < size; ++y) {
		int32_t maxX = $cast(int32_t, (y * $Math::tan($Math::toRadians(30.0))));
		float factor = (float)(maxX * 2);
		if (maxX > 0) {
			float value = (float)(y / dSize);
			for (int32_t x = -maxX; x <= maxX; ++x) {
				float saturation = (float)x / factor + 0.5f;
				$nc(g)->setColor($($Color::getHSBColor(hue, saturation, value)));
				g->fillRect(x, y, 1, 1);
			}
		} else {
			$nc(g)->setColor(color);
			g->fillRect(0, y, 1, 1);
		}
	}
}

$Image* GTKColorChooserPanel$ColorTriangle::getWheelImage(int32_t size) {
	int32_t minSize = size - getWheelWidth();
	int32_t doubleSize = size * 2;
	$var($BufferedImage, image, $new($BufferedImage, doubleSize, doubleSize, $BufferedImage::TYPE_INT_ARGB));
	for (int32_t y = -size; y < size; ++y) {
		int32_t ySquared = y * y;
		for (int32_t x = -size; x < size; ++x) {
			double rad = $Math::sqrt((double)(ySquared + x * x));
			if (rad < size && rad > minSize) {
				int32_t rgb = colorWheelLocationToRGB(x, y, rad) | (int32_t)0xFF000000;
				image->setRGB(x + size, y + size, rgb);
			}
		}
	}
	$set(this, wheelImage, image);
	return this->wheelImage;
}

bool GTKColorChooserPanel$ColorTriangle::adjustSB(int32_t x, int32_t y, bool checkLoc) {
	int32_t var$0 = getWheelRadius();
	int32_t innerR = var$0 - getWheelWidth();
	bool resetXY = false;
	y = -y;
	if (checkLoc && (x < -innerR || x > innerR || y < -innerR || y > innerR)) {
		return false;
	}
	int32_t triangleSize = innerR * 3 / 2;
	double var$1 = $Math::cos(this->angle) * x;
	double x1 = var$1 - $Math::sin(this->angle) * y;
	double var$2 = $Math::sin(this->angle) * x;
	double y1 = var$2 + $Math::cos(this->angle) * y;
	if (x1 < -(innerR / 2)) {
		if (checkLoc) {
			return false;
		}
		x1 = (double)(-innerR / 2);
		resetXY = true;
	} else if ($cast(int32_t, x1) > innerR) {
		if (checkLoc) {
			return false;
		}
		x1 = (double)innerR;
		resetXY = true;
	}
	int32_t maxY = $cast(int32_t, ((triangleSize - x1 - innerR / 2.0) * $Math::tan($Math::toRadians(30.0))));
	if (y1 <= -maxY) {
		if (checkLoc) {
			return false;
		}
		y1 = (double)(-maxY);
		resetXY = true;
	} else if (y1 > maxY) {
		if (checkLoc) {
			return false;
		}
		y1 = (double)maxY;
		resetXY = true;
	}
	double var$3 = $Math::cos($Math::toRadians(-30.0)) * x1;
	double x2 = var$3 - $Math::sin($Math::toRadians(-30.0)) * y1;
	double var$4 = $Math::sin($Math::toRadians(-30.0)) * x1;
	double y2 = var$4 + $Math::cos($Math::toRadians(-30.0)) * y1;
	float value = $Math::min(1.0f, (float)((innerR - y2) / (double)triangleSize));
	float maxX = (float)($Math::tan($Math::toRadians((double)30)) * (innerR - y2));
	float saturation = $Math::min(1.0f, (float)(x2 / maxX / 2 + 0.5));
	setFlag(8, true);
	if (resetXY) {
		setSaturationAndBrightness(saturation, value);
	} else {
		float var$5 = saturation;
		float var$6 = value;
		int32_t var$7 = x + getWheelXOrigin();
		setSaturationAndBrightness(var$5, var$6, var$7, getWheelYOrigin() - y);
	}
	this->this$0->setSaturationAndBrightness(saturation, value, true);
	setFlag(8, false);
	return true;
}

void GTKColorChooserPanel$ColorTriangle::setSaturationAndBrightness(float s, float b) {
	int32_t innerR = getTriangleCircumscribedRadius();
	int32_t triangleSize = innerR * 3 / 2;
	double x = b * triangleSize;
	double maxY = x * $Math::tan($Math::toRadians(30.0));
	double y = 2 * maxY * s - maxY;
	x = x - innerR;
	double var$0 = $Math::cos($Math::toRadians(-60.0) - this->angle) * x;
	double x1 = var$0 - $Math::sin($Math::toRadians(-60.0) - this->angle) * y;
	double var$1 = $Math::sin($Math::toRadians(-60.0) - this->angle) * x;
	double y1 = var$1 + $Math::cos($Math::toRadians(-60.0) - this->angle) * y;
	int32_t newCircleX = $cast(int32_t, x1) + getWheelXOrigin();
	int32_t newCircleY = getWheelYOrigin() - $cast(int32_t, y1);
	setSaturationAndBrightness(s, b, newCircleX, newCircleY);
}

void GTKColorChooserPanel$ColorTriangle::setSaturationAndBrightness(float s, float b, int32_t newCircleX, int32_t newCircleY) {
	newCircleX -= getIndicatorSize() / 2;
	newCircleY -= getIndicatorSize() / 2;
	int32_t minX = $Math::min(newCircleX, this->circleX);
	int32_t minY = $Math::min(newCircleY, this->circleY);
	int32_t var$0 = minX;
	int32_t var$1 = minY;
	int32_t var$3 = $Math::max(this->circleX, newCircleX) - minX;
	int32_t var$2 = var$3 + getIndicatorSize() + 1;
	int32_t var$4 = $Math::max(this->circleY, newCircleY) - minY;
	repaint(var$0, var$1, var$2, var$4 + getIndicatorSize() + 1);
	this->circleX = newCircleX;
	this->circleY = newCircleY;
}

bool GTKColorChooserPanel$ColorTriangle::adjustHue(int32_t x, int32_t y, bool check) {
	double rad = $Math::sqrt((double)(x * x + y * y));
	int32_t size = getWheelRadius();
	if (!check || (rad >= size - getWheelWidth() && rad < size)) {
		double angle = 0.0;
		if (x == 0) {
			if (y > 0) {
				angle = $Math::PI / 2.0;
			} else {
				angle = $Math::PI + $Math::PI / 2.0;
			}
		} else {
			angle = $Math::atan((double)y / (double)x);
			if (x < 0) {
				angle += $Math::PI;
			} else if (angle < 0) {
				angle += 2 * $Math::PI;
			}
		}
		setFlag(8, true);
		this->this$0->setHue((float)(1.0 - $div(angle, $Math::PI) / 2), true);
		setFlag(8, false);
		setHueAngle(angle);
		float var$0 = this->this$0->getSaturation();
		setSaturationAndBrightness(var$0, this->this$0->getBrightness());
		return true;
	}
	return false;
}

void GTKColorChooserPanel$ColorTriangle::setAngleFromHue(float hue) {
	$init($Math);
	setHueAngle((1.0 - hue) * $Math::PI * 2);
}

void GTKColorChooserPanel$ColorTriangle::setHueAngle(double angle) {
	double oldAngle = this->angle;
	this->angle = angle;
	if (angle != oldAngle) {
		setFlag(1, true);
		repaint();
	}
}

int32_t GTKColorChooserPanel$ColorTriangle::getIndicatorSize() {
	return 8;
}

int32_t GTKColorChooserPanel$ColorTriangle::getTriangleCircumscribedRadius() {
	return 72;
}

int32_t GTKColorChooserPanel$ColorTriangle::getWheelXOrigin() {
	return 85;
}

int32_t GTKColorChooserPanel$ColorTriangle::getWheelYOrigin() {
	return 85;
}

int32_t GTKColorChooserPanel$ColorTriangle::getWheelWidth() {
	return 13;
}

void GTKColorChooserPanel$ColorTriangle::setFocusType(int32_t type) {
	if (type == 0) {
		setFlag(16, false);
		setFlag(32, false);
		repaint();
	} else {
		int32_t toSet = 16;
		int32_t toUnset = 32;
		if (type == 2) {
			toSet = 32;
			toUnset = 16;
		}
		if (!isSet(toSet)) {
			setFlag(toSet, true);
			repaint();
			setFlag(toUnset, false);
		}
	}
}

int32_t GTKColorChooserPanel$ColorTriangle::getWheelRadius() {
	return 85;
}

void GTKColorChooserPanel$ColorTriangle::setFlag(int32_t flag, bool value) {
	if (value) {
		this->flags |= flag;
	} else {
		this->flags &= (uint32_t)~flag;
	}
}

bool GTKColorChooserPanel$ColorTriangle::isSet(int32_t flag) {
	return (((int32_t)(this->flags & (uint32_t)flag)) == flag);
}

int32_t GTKColorChooserPanel$ColorTriangle::colorWheelLocationToRGB(int32_t x, int32_t y, double rad) {
	double angle = $Math::acos((double)x / rad);
	int32_t rgb = 0;
	if (angle < 1.0471976f) {
		if (y < 0) {
			rgb = 0x00FF0000 | ($Math::min(255, $cast(int32_t, (255 * angle / 1.0471976f))) << 8);
		} else {
			rgb = 0x00FF0000 | $Math::min(255, $cast(int32_t, (255 * angle / 1.0471976f)));
		}
	} else if (angle < 2 * 1.0471976f) {
		angle -= 1.0471976f;
		if (y < 0) {
			rgb = 0x0000FF00 | ($Math::max(0, 255 - $cast(int32_t, (255 * angle / 1.0471976f))) << 16);
		} else {
			rgb = 255 | ($Math::max(0, 255 - $cast(int32_t, (255 * angle / 1.0471976f))) << 16);
		}
	} else {
		angle -= 2 * 1.0471976f;
		if (y < 0) {
			rgb = 0x0000FF00 | $Math::min(255, $cast(int32_t, (255 * angle / 1.0471976f)));
		} else {
			rgb = 255 | ($Math::min(255, $cast(int32_t, (255 * angle / 1.0471976f))) << 8);
		}
	}
	return rgb;
}

void GTKColorChooserPanel$ColorTriangle::incrementHue(bool positive) {
	$useLocalCurrentObjectStackCache();
	float hue = $nc($($nc(this->this$0->triangle)->getGTKColorChooserPanel()))->getHue();
	if (positive) {
		hue += 1.0f / 360.0f;
	} else {
		hue -= 1.0f / 360.0f;
	}
	if (hue > 1) {
		hue -= 1;
	} else if (hue < 0) {
		hue += 1;
	}
	$nc($(getGTKColorChooserPanel()))->setHue(hue, true);
}

GTKColorChooserPanel$ColorTriangle::GTKColorChooserPanel$ColorTriangle() {
}

$Class* GTKColorChooserPanel$ColorTriangle::load$($String* name, bool initialize) {
	$loadClass(GTKColorChooserPanel$ColorTriangle, name, initialize, &_GTKColorChooserPanel$ColorTriangle_ClassInfo_, allocate$GTKColorChooserPanel$ColorTriangle);
	return class$;
}

$Class* GTKColorChooserPanel$ColorTriangle::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com