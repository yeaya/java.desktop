#include <com/apple/laf/AquaProgressBarUI.h>

#include <apple/laf/JRSUIConstants$Animating.h>
#include <apple/laf/JRSUIConstants$Orientation.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState$ValueState.h>
#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIStateFactory.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaProgressBarUI$1.h>
#include <com/apple/laf/AquaProgressBarUI$Animator.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Math.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/AncestorEvent.h>
#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ProgressBarUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACTIVE
#undef ADJUSTTIMER
#undef HORIZONTAL
#undef INACTIVE
#undef MAX_VALUE
#undef MINI
#undef NO
#undef PI
#undef PROGRESS_BAR
#undef PROGRESS_INDETERMINATE_BAR
#undef PROGRESS_SPINNER
#undef REGULAR
#undef SMALL
#undef VERTICAL
#undef YES

using $JRSUIConstants$Animating = ::apple::laf::JRSUIConstants$Animating;
using $JRSUIConstants$Orientation = ::apple::laf::JRSUIConstants$Orientation;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIState$ValueState = ::apple::laf::JRSUIState$ValueState;
using $JRSUIStateFactory = ::apple::laf::JRSUIStateFactory;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaProgressBarUI$1 = ::com::apple::laf::AquaProgressBarUI$1;
using $AquaProgressBarUI$Animator = ::com::apple::laf::AquaProgressBarUI$Animator;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JProgressBar = ::javax::swing::JProgressBar;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $AncestorEvent = ::javax::swing::event::AncestorEvent;
using $AncestorListener = ::javax::swing::event::AncestorListener;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ProgressBarUI = ::javax::swing::plaf::ProgressBarUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaProgressBarUI_FieldInfo_[] = {
	{"ADJUSTTIMER", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaProgressBarUI, ADJUSTTIMER)},
	{"sizeDescriptor", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaProgressBarUI, sizeDescriptor)},
	{"sizeVariant", "Lapple/laf/JRSUIConstants$Size;", nullptr, $PROTECTED, $field(AquaProgressBarUI, sizeVariant)},
	{"selectionForeground", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(AquaProgressBarUI, selectionForeground)},
	{"animator", "Lcom/apple/laf/AquaProgressBarUI$Animator;", nullptr, $PRIVATE, $field(AquaProgressBarUI, animator)},
	{"isAnimating", "Z", nullptr, $PROTECTED, $field(AquaProgressBarUI, isAnimating)},
	{"isCircular", "Z", nullptr, $PROTECTED, $field(AquaProgressBarUI, isCircular)},
	{"painter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState$ValueState;>;", $PROTECTED | $FINAL, $field(AquaProgressBarUI, painter)},
	{"progressBar", "Ljavax/swing/JProgressBar;", nullptr, $PROTECTED, $field(AquaProgressBarUI, progressBar)},
	{"fUpdateArea", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $FINAL, $field(AquaProgressBarUI, fUpdateArea)},
	{"fLastSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $FINAL, $field(AquaProgressBarUI, fLastSize)},
	{}
};

$MethodInfo _AquaProgressBarUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AquaProgressBarUI::*)()>(&AquaProgressBarUI::init$))},
	{"ancestorAdded", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"ancestorMoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"ancestorRemoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"applySizeFor", "(Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$Size;)V", nullptr, $PUBLIC},
	{"checkValue", "(D)D", nullptr, $STATIC, $method(static_cast<double(*)(double)>(&AquaProgressBarUI::checkValue))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaProgressBarUI::createUI))},
	{"getCircularPreferredSize", "()Ljava/awt/Dimension;", nullptr, $STATIC, $method(static_cast<$Dimension*(*)()>(&AquaProgressBarUI::getCircularPreferredSize))},
	{"getMaxProgressBarHeight", "()I", nullptr, $PROTECTED},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredHorizontalSize", "(Ljava/awt/FontMetrics;)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredVerticalSize", "(Ljava/awt/FontMetrics;)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getRepaintRect", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getSizeDescriptor", "()Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;", nullptr, $STATIC, $method(static_cast<$AquaUtilControlSize$SizeDescriptor*(*)()>(&AquaProgressBarUI::getSizeDescriptor))},
	{"getState", "(Ljavax/swing/JComponent;)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED},
	{"getStringPlacement", "(Ljava/awt/Graphics;Ljava/lang/String;IIII)Ljava/awt/Point;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isHorizontal", "()Z", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintString", "(Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PROTECTED},
	{"revalidateAnimationTimers", "()V", nullptr, $PROTECTED},
	{"startAnimationTimer", "()V", nullptr, $PROTECTED},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"stopAnimationTimer", "()V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaProgressBarUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtilControlSize$Sizeable", "com.apple.laf.AquaUtilControlSize", "Sizeable", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaProgressBarUI$Animator", "com.apple.laf.AquaProgressBarUI", "Animator", $PROTECTED},
	{"com.apple.laf.AquaProgressBarUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaProgressBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaProgressBarUI",
	"javax.swing.plaf.ProgressBarUI",
	"javax.swing.event.ChangeListener,java.beans.PropertyChangeListener,javax.swing.event.AncestorListener,com.apple.laf.AquaUtilControlSize$Sizeable",
	_AquaProgressBarUI_FieldInfo_,
	_AquaProgressBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaProgressBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaProgressBarUI$Animator,com.apple.laf.AquaProgressBarUI$1,com.apple.laf.AquaProgressBarUI$1$1"
};

$Object* allocate$AquaProgressBarUI($Class* clazz) {
	return $of($alloc(AquaProgressBarUI));
}

int32_t AquaProgressBarUI::hashCode() {
	 return this->$ProgressBarUI::hashCode();
}

bool AquaProgressBarUI::equals(Object$* arg0) {
	 return this->$ProgressBarUI::equals(arg0);
}

$Object* AquaProgressBarUI::clone() {
	 return this->$ProgressBarUI::clone();
}

$String* AquaProgressBarUI::toString() {
	 return this->$ProgressBarUI::toString();
}

void AquaProgressBarUI::finalize() {
	this->$ProgressBarUI::finalize();
}

$AquaUtils$RecyclableSingleton* AquaProgressBarUI::sizeDescriptor = nullptr;

$AquaUtilControlSize$SizeDescriptor* AquaProgressBarUI::getSizeDescriptor() {
	$init(AquaProgressBarUI);
	return $cast($AquaUtilControlSize$SizeDescriptor, $nc(AquaProgressBarUI::sizeDescriptor)->get());
}

$ComponentUI* AquaProgressBarUI::createUI($JComponent* x) {
	$init(AquaProgressBarUI);
	return $new(AquaProgressBarUI);
}

void AquaProgressBarUI::init$() {
	$ProgressBarUI::init$();
	$init($JRSUIConstants$Size);
	$set(this, sizeVariant, $JRSUIConstants$Size::REGULAR);
	$set(this, painter, $AquaPainter::create($($JRSUIStateFactory::getProgressBar())));
	$set(this, fUpdateArea, $new($Rectangle, 0, 0, 0, 0));
	$set(this, fLastSize, $new($Dimension, 0, 0));
}

void AquaProgressBarUI::installUI($JComponent* c) {
	$set(this, progressBar, $cast($JProgressBar, c));
	installDefaults();
	installListeners();
}

void AquaProgressBarUI::uninstallUI($JComponent* c) {
	uninstallDefaults();
	uninstallListeners();
	stopAnimationTimer();
	$set(this, progressBar, nullptr);
}

void AquaProgressBarUI::installDefaults() {
	$nc(this->progressBar)->setOpaque(false);
	$LookAndFeel::installBorder(this->progressBar, "ProgressBar.border"_s);
	$LookAndFeel::installColorsAndFont(this->progressBar, "ProgressBar.background"_s, "ProgressBar.foreground"_s, "ProgressBar.font"_s);
	$set(this, selectionForeground, $UIManager::getColor("ProgressBar.selectionForeground"_s));
}

void AquaProgressBarUI::uninstallDefaults() {
	$LookAndFeel::uninstallBorder(this->progressBar);
}

void AquaProgressBarUI::installListeners() {
	$nc(this->progressBar)->addChangeListener(this);
	$nc(this->progressBar)->addPropertyChangeListener(this);
	$nc(this->progressBar)->addAncestorListener(this);
	$AquaUtilControlSize::addSizePropertyListener(this->progressBar);
}

void AquaProgressBarUI::uninstallListeners() {
	$AquaUtilControlSize::removeSizePropertyListener(this->progressBar);
	$nc(this->progressBar)->removeAncestorListener(this);
	$nc(this->progressBar)->removePropertyChangeListener(this);
	$nc(this->progressBar)->removeChangeListener(this);
}

void AquaProgressBarUI::stateChanged($ChangeEvent* e) {
	$nc(this->progressBar)->repaint();
}

void AquaProgressBarUI::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(e)->getPropertyName());
	if ("indeterminate"_s->equals(prop)) {
		if (!$nc(this->progressBar)->isIndeterminate()) {
			return;
		}
		stopAnimationTimer();
		if ($nc(this->progressBar)->isDisplayable()) {
			startAnimationTimer();
		}
	}
	if ("JProgressBar.style"_s->equals(prop)) {
		this->isCircular = "circular"_s->equalsIgnoreCase($$str({$(e->getNewValue()), ""_s}));
		$nc(this->progressBar)->repaint();
	}
}

void AquaProgressBarUI::ancestorRemoved($AncestorEvent* e) {
	stopAnimationTimer();
}

void AquaProgressBarUI::ancestorAdded($AncestorEvent* e) {
	if (!$nc(this->progressBar)->isIndeterminate()) {
		return;
	}
	if ($nc(this->progressBar)->isDisplayable()) {
		startAnimationTimer();
	}
}

void AquaProgressBarUI::ancestorMoved($AncestorEvent* e) {
}

void AquaProgressBarUI::paint($Graphics* g, $JComponent* c) {
	revalidateAnimationTimers();
	$nc(($cast($JRSUIState$ValueState, $nc(this->painter)->state)))->set($(getState(c)));
	$init($JRSUIConstants$Orientation);
	$nc(($cast($JRSUIState$ValueState, $nc(this->painter)->state)))->set(isHorizontal() ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Orientation::HORIZONTAL) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Orientation::VERTICAL));
	$init($JRSUIConstants$Animating);
	$nc(($cast($JRSUIState$ValueState, $nc(this->painter)->state)))->set(this->isAnimating ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Animating::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Animating::NO));
	if ($nc(this->progressBar)->isIndeterminate()) {
		if (this->isCircular) {
			$init($JRSUIConstants$Widget);
			$nc(($cast($JRSUIState$ValueState, $nc(this->painter)->state)))->set($JRSUIConstants$Widget::PROGRESS_SPINNER);
			$nc(this->painter)->paint(g, c, 2, 2, 16, 16);
			return;
		}
		$init($JRSUIConstants$Widget);
		$nc(($cast($JRSUIState$ValueState, $nc(this->painter)->state)))->set($JRSUIConstants$Widget::PROGRESS_INDETERMINATE_BAR);
		paint(g);
		return;
	}
	$init($JRSUIConstants$Widget);
	$nc(($cast($JRSUIState$ValueState, $nc(this->painter)->state)))->set($JRSUIConstants$Widget::PROGRESS_BAR);
	$nc(($cast($JRSUIState$ValueState, $nc(this->painter)->state)))->setValue(checkValue($nc(this->progressBar)->getPercentComplete()));
	paint(g);
}

double AquaProgressBarUI::checkValue(double value) {
	$init(AquaProgressBarUI);
	return $Double::isNaN(value) ? (double)0 : value;
}

void AquaProgressBarUI::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, i, $nc(this->progressBar)->getInsets());
	int32_t width = $nc(this->progressBar)->getWidth() - ($nc(i)->right + i->left);
	int32_t height = $nc(this->progressBar)->getHeight() - (i->bottom + i->top);
	$var($Graphics2D, g2, $cast($Graphics2D, g));
	$var($AffineTransform, savedAT, $nc(g2)->getTransform());
	if (!$nc($($nc(this->progressBar)->getComponentOrientation()))->isLeftToRight()) {
		g2->scale((double)-1, (double)1);
		g2->translate(-$nc(this->progressBar)->getWidth(), 0);
	}
	$nc(this->painter)->paint(g, this->progressBar, i->left, i->top, width, height);
	g2->setTransform(savedAT);
	bool var$0 = $nc(this->progressBar)->isStringPainted();
	if (var$0 && !$nc(this->progressBar)->isIndeterminate()) {
		paintString(g, i->left, i->top, width, height);
	}
}

$JRSUIConstants$State* AquaProgressBarUI::getState($JComponent* c) {
	if (!$nc(c)->isEnabled()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	if (!$AquaFocusHandler::isActive(c)) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

void AquaProgressBarUI::paintString($Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Graphics2D, g))) {
		return;
	}
	$var($Graphics2D, g2, $cast($Graphics2D, g));
	$var($String, progressString, $nc(this->progressBar)->getString());
	$nc(g2)->setFont($($nc(this->progressBar)->getFont()));
	$var($Point, renderLocation, getStringPlacement(g2, progressString, x, y, width, height));
	$var($Rectangle, oldClip, g2->getClipBounds());
	if (isHorizontal()) {
		g2->setColor(this->selectionForeground);
		$SwingUtilities2::drawString(static_cast<$JComponent*>(this->progressBar), static_cast<$Graphics*>(g2), progressString, $nc(renderLocation)->x, renderLocation->y);
	} else {
		$var($AffineTransform, savedAT, g2->getTransform());
		$init($Math);
		g2->transform($($AffineTransform::getRotateInstance(0.0f - ($Math::PI / 2.0f), (double)0, (double)0)));
		g2->translate(-$nc(this->progressBar)->getHeight(), 0);
		g2->setColor(this->selectionForeground);
		$SwingUtilities2::drawString(static_cast<$JComponent*>(this->progressBar), static_cast<$Graphics*>(g2), progressString, $nc(renderLocation)->x, renderLocation->y);
		g2->setTransform(savedAT);
	}
	g2->setClip(oldClip);
}

$Point* AquaProgressBarUI::getStringPlacement($Graphics* g, $String* progressString, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fontSizer, $nc(this->progressBar)->getFontMetrics($($nc(this->progressBar)->getFont())));
	int32_t stringWidth = $nc(fontSizer)->stringWidth(progressString);
	if (!isHorizontal()) {
		int32_t oldH = height;
		height = width;
		width = oldH;
		int32_t oldX = x;
		x = y;
		y = oldX;
	}
	int32_t var$0 = x + $Math::round((float)(width / 2 - stringWidth / 2));
	int32_t var$1 = y;
	int32_t var$4 = height + fontSizer->getAscent();
	int32_t var$3 = var$4 - fontSizer->getLeading();
	int32_t var$2 = ((var$3 - fontSizer->getDescent()) / 2);
	return $new($Point, var$0, var$1 + var$2 - 1);
}

$Dimension* AquaProgressBarUI::getCircularPreferredSize() {
	$init(AquaProgressBarUI);
	return $new($Dimension, 20, 20);
}

$Dimension* AquaProgressBarUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if (this->isCircular) {
		return getCircularPreferredSize();
	}
	$var($FontMetrics, metrics, $nc(this->progressBar)->getFontMetrics($($nc(this->progressBar)->getFont())));
	$var($Dimension, size, isHorizontal() ? getPreferredHorizontalSize(metrics) : getPreferredVerticalSize(metrics));
	$var($Insets, insets, $nc(this->progressBar)->getInsets());
	$nc(size)->width += $nc(insets)->left + insets->right;
	size->height += insets->top + insets->bottom;
	return size;
}

$Dimension* AquaProgressBarUI::getPreferredHorizontalSize($FontMetrics* metrics) {
	$useLocalCurrentObjectStackCache();
	$var($AquaUtilControlSize$SizeVariant, variant, $nc($(getSizeDescriptor()))->get(this->sizeVariant));
	$var($Dimension, size, $new($Dimension, $nc(variant)->w, variant->h));
	if (!$nc(this->progressBar)->isStringPainted()) {
		return size;
	}
	$var($String, progString, $nc(this->progressBar)->getString());
	int32_t stringWidth = $nc(metrics)->stringWidth(progString);
	if (stringWidth > size->width) {
		size->width = stringWidth;
	}
	int32_t var$0 = metrics->getHeight();
	int32_t stringHeight = var$0 + metrics->getDescent();
	if (stringHeight > size->height) {
		size->height = stringHeight;
	}
	return size;
}

$Dimension* AquaProgressBarUI::getPreferredVerticalSize($FontMetrics* metrics) {
	$useLocalCurrentObjectStackCache();
	$var($AquaUtilControlSize$SizeVariant, variant, $nc($(getSizeDescriptor()))->get(this->sizeVariant));
	$var($Dimension, size, $new($Dimension, $nc(variant)->h, variant->w));
	if (!$nc(this->progressBar)->isStringPainted()) {
		return size;
	}
	$var($String, progString, $nc(this->progressBar)->getString());
	int32_t var$0 = $nc(metrics)->getHeight();
	int32_t stringHeight = var$0 + metrics->getDescent();
	if (stringHeight > size->width) {
		size->width = stringHeight;
	}
	int32_t stringWidth = metrics->stringWidth(progString);
	if (stringWidth > size->height) {
		size->height = stringWidth;
	}
	return size;
}

$Dimension* AquaProgressBarUI::getMinimumSize($JComponent* c) {
	if (this->isCircular) {
		return getCircularPreferredSize();
	}
	$var($Dimension, pref, getPreferredSize(this->progressBar));
	if (isHorizontal()) {
		$nc(pref)->width = 10;
	} else {
		$nc(pref)->height = 10;
	}
	return pref;
}

$Dimension* AquaProgressBarUI::getMaximumSize($JComponent* c) {
	if (this->isCircular) {
		return getCircularPreferredSize();
	}
	$var($Dimension, pref, getPreferredSize(this->progressBar));
	if (isHorizontal()) {
		$nc(pref)->width = $Short::MAX_VALUE;
	} else {
		$nc(pref)->height = $Short::MAX_VALUE;
	}
	return pref;
}

void AquaProgressBarUI::applySizeFor($JComponent* c, $JRSUIConstants$Size* size) {
	$init($JRSUIConstants$Size);
	$nc(($cast($JRSUIState$ValueState, $nc(this->painter)->state)))->set(($set(this, sizeVariant, size == $JRSUIConstants$Size::MINI ? $JRSUIConstants$Size::SMALL : this->sizeVariant)));
}

void AquaProgressBarUI::startAnimationTimer() {
	if (this->animator == nullptr) {
		$set(this, animator, $new($AquaProgressBarUI$Animator, this));
	}
	$nc(this->animator)->start();
	this->isAnimating = true;
}

void AquaProgressBarUI::stopAnimationTimer() {
	if (this->animator != nullptr) {
		$nc(this->animator)->stop();
	}
	this->isAnimating = false;
}

$Rectangle* AquaProgressBarUI::getRepaintRect() {
	int32_t height = $nc(this->progressBar)->getHeight();
	int32_t width = $nc(this->progressBar)->getWidth();
	if (this->isCircular) {
		return $new($Rectangle, 20, 20);
	}
	if ($nc(this->fLastSize)->height == height && $nc(this->fLastSize)->width == width) {
		return this->fUpdateArea;
	}
	int32_t x = 0;
	int32_t y = 0;
	$nc(this->fLastSize)->height = height;
	$nc(this->fLastSize)->width = width;
	int32_t maxHeight = getMaxProgressBarHeight();
	if (isHorizontal()) {
		int32_t excessHeight = height - maxHeight;
		y += excessHeight / 2;
		height = maxHeight;
	} else {
		int32_t excessHeight = width - maxHeight;
		x += excessHeight / 2;
		width = maxHeight;
	}
	$nc(this->fUpdateArea)->setBounds(x, y, width, height);
	return this->fUpdateArea;
}

int32_t AquaProgressBarUI::getMaxProgressBarHeight() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(getSizeDescriptor()))->get(this->sizeVariant)))->h;
}

bool AquaProgressBarUI::isHorizontal() {
	return $nc(this->progressBar)->getOrientation() == $SwingConstants::HORIZONTAL;
}

void AquaProgressBarUI::revalidateAnimationTimers() {
	if ($nc(this->progressBar)->isIndeterminate()) {
		return;
	}
	if (!this->isAnimating) {
		startAnimationTimer();
		return;
	}
	$var($BoundedRangeModel, model, $nc(this->progressBar)->getModel());
	double currentValue = (double)$nc(model)->getValue();
	bool var$0 = (currentValue == model->getMaximum());
	if (var$0 || (currentValue == model->getMinimum())) {
		stopAnimationTimer();
	}
}

void AquaProgressBarUI::repaint() {
	$var($Rectangle, repaintRect, getRepaintRect());
	if (repaintRect == nullptr) {
		$nc(this->progressBar)->repaint();
		return;
	}
	$nc(this->progressBar)->repaint(repaintRect);
}

void clinit$AquaProgressBarUI($Class* class$) {
	$assignStatic(AquaProgressBarUI::sizeDescriptor, $new($AquaProgressBarUI$1));
}

AquaProgressBarUI::AquaProgressBarUI() {
}

$Class* AquaProgressBarUI::load$($String* name, bool initialize) {
	$loadClass(AquaProgressBarUI, name, initialize, &_AquaProgressBarUI_ClassInfo_, clinit$AquaProgressBarUI, allocate$AquaProgressBarUI);
	return class$;
}

$Class* AquaProgressBarUI::class$ = nullptr;

		} // laf
	} // apple
} // com