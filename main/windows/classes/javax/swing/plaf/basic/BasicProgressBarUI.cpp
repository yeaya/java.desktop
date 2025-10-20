#include <javax/swing/plaf/basic/BasicProgressBarUI.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
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
#include <java/awt/Stroke.h>
#include <java/awt/event/HierarchyListener.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ProgressBarUI.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI$Animator.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI$Handler.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ADJUSTTIMER
#undef CAP_BUTT
#undef CENTER_OFFSET
#undef HORIZONTAL
#undef JOIN_BEVEL
#undef MAX_VALUE
#undef OTHER
#undef PI
#undef TRUE

using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $HierarchyListener = ::java::awt::event::HierarchyListener;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
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
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ProgressBarUI = ::javax::swing::plaf::ProgressBarUI;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicProgressBarUI$Animator = ::javax::swing::plaf::basic::BasicProgressBarUI$Animator;
using $BasicProgressBarUI$Handler = ::javax::swing::plaf::basic::BasicProgressBarUI$Handler;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicProgressBarUI_FieldInfo_[] = {
	{"cachedPercent", "I", nullptr, $PRIVATE, $field(BasicProgressBarUI, cachedPercent)},
	{"cellLength", "I", nullptr, $PRIVATE, $field(BasicProgressBarUI, cellLength)},
	{"cellSpacing", "I", nullptr, $PRIVATE, $field(BasicProgressBarUI, cellSpacing)},
	{"selectionForeground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicProgressBarUI, selectionForeground)},
	{"selectionBackground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicProgressBarUI, selectionBackground)},
	{"animator", "Ljavax/swing/plaf/basic/BasicProgressBarUI$Animator;", nullptr, $PRIVATE, $field(BasicProgressBarUI, animator)},
	{"progressBar", "Ljavax/swing/JProgressBar;", nullptr, $PROTECTED, $field(BasicProgressBarUI, progressBar)},
	{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(BasicProgressBarUI, changeListener)},
	{"handler", "Ljavax/swing/plaf/basic/BasicProgressBarUI$Handler;", nullptr, $PRIVATE, $field(BasicProgressBarUI, handler)},
	{"animationIndex", "I", nullptr, $PRIVATE, $field(BasicProgressBarUI, animationIndex)},
	{"numFrames", "I", nullptr, $PRIVATE, $field(BasicProgressBarUI, numFrames)},
	{"repaintInterval", "I", nullptr, $PRIVATE, $field(BasicProgressBarUI, repaintInterval)},
	{"cycleTime", "I", nullptr, $PRIVATE, $field(BasicProgressBarUI, cycleTime)},
	{"ADJUSTTIMER", "Z", nullptr, $PRIVATE | $STATIC, $staticField(BasicProgressBarUI, ADJUSTTIMER)},
	{"boxRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(BasicProgressBarUI, boxRect)},
	{"nextPaintRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(BasicProgressBarUI, nextPaintRect)},
	{"componentInnards", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(BasicProgressBarUI, componentInnards)},
	{"oldComponentInnards", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(BasicProgressBarUI, oldComponentInnards)},
	{"delta", "D", nullptr, $PRIVATE, $field(BasicProgressBarUI, delta)},
	{"maxPosition", "I", nullptr, $PRIVATE, $field(BasicProgressBarUI, maxPosition)},
	{}
};

$MethodInfo _BasicProgressBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicProgressBarUI::*)()>(&BasicProgressBarUI::init$))},
	{"cleanUpIndeterminateValues", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicProgressBarUI::*)()>(&BasicProgressBarUI::cleanUpIndeterminateValues))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicProgressBarUI::createUI))},
	{"getAmountFull", "(Ljava/awt/Insets;II)I", nullptr, $PROTECTED},
	{"getAnimationIndex", "()I", nullptr, $PROTECTED},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getBox", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getBoxLength", "(II)I", nullptr, $PROTECTED},
	{"getCachedPercent", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicProgressBarUI::*)()>(&BasicProgressBarUI::getCachedPercent))},
	{"getCellLength", "()I", nullptr, $PROTECTED},
	{"getCellSpacing", "()I", nullptr, $PROTECTED},
	{"getCycleTime", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicProgressBarUI::*)()>(&BasicProgressBarUI::getCycleTime))},
	{"getFrameCount", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(BasicProgressBarUI::*)()>(&BasicProgressBarUI::getFrameCount))},
	{"getGenericBox", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(BasicProgressBarUI::*)($Rectangle*)>(&BasicProgressBarUI::getGenericBox))},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicProgressBarUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicProgressBarUI$Handler*(BasicProgressBarUI::*)()>(&BasicProgressBarUI::getHandler))},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredInnerHorizontal", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getPreferredInnerVertical", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getRepaintInterval", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicProgressBarUI::*)()>(&BasicProgressBarUI::getRepaintInterval))},
	{"getSelectionBackground", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getSelectionForeground", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getStringPlacement", "(Ljava/awt/Graphics;Ljava/lang/String;IIII)Ljava/awt/Point;", nullptr, $PROTECTED},
	{"incrementAnimationIndex", "()V", nullptr, $PROTECTED},
	{"initAnimationIndex", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicProgressBarUI::*)()>(&BasicProgressBarUI::initAnimationIndex))},
	{"initCycleTime", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicProgressBarUI::*)()>(&BasicProgressBarUI::initCycleTime))},
	{"initIndeterminateDefaults", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicProgressBarUI::*)()>(&BasicProgressBarUI::initIndeterminateDefaults))},
	{"initIndeterminateValues", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicProgressBarUI::*)()>(&BasicProgressBarUI::initIndeterminateValues))},
	{"initRepaintInterval", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicProgressBarUI::*)()>(&BasicProgressBarUI::initRepaintInterval))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintDeterminate", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"paintIndeterminate", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"paintString", "(Ljava/awt/Graphics;IIIIILjava/awt/Insets;)V", nullptr, $PROTECTED},
	{"paintString", "(Ljava/awt/Graphics;IIIIIILjava/awt/Insets;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicProgressBarUI::*)($Graphics*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$Insets*)>(&BasicProgressBarUI::paintString))},
	{"setAnimationIndex", "(I)V", nullptr, $PROTECTED},
	{"setCachedPercent", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BasicProgressBarUI::*)(int32_t)>(&BasicProgressBarUI::setCachedPercent))},
	{"setCellLength", "(I)V", nullptr, $PROTECTED},
	{"setCellSpacing", "(I)V", nullptr, $PROTECTED},
	{"sizeChanged", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicProgressBarUI::*)()>(&BasicProgressBarUI::sizeChanged))},
	{"startAnimationTimer", "()V", nullptr, $PROTECTED},
	{"stopAnimationTimer", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateSizes", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicProgressBarUI::*)()>(&BasicProgressBarUI::updateSizes))},
	{}
};

$InnerClassInfo _BasicProgressBarUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicProgressBarUI$Handler", "javax.swing.plaf.basic.BasicProgressBarUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicProgressBarUI$ChangeHandler", "javax.swing.plaf.basic.BasicProgressBarUI", "ChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicProgressBarUI$Animator", "javax.swing.plaf.basic.BasicProgressBarUI", "Animator", $PRIVATE},
	{}
};

$ClassInfo _BasicProgressBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicProgressBarUI",
	"javax.swing.plaf.ProgressBarUI",
	nullptr,
	_BasicProgressBarUI_FieldInfo_,
	_BasicProgressBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicProgressBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicProgressBarUI$Handler,javax.swing.plaf.basic.BasicProgressBarUI$ChangeHandler,javax.swing.plaf.basic.BasicProgressBarUI$Animator"
};

$Object* allocate$BasicProgressBarUI($Class* clazz) {
	return $of($alloc(BasicProgressBarUI));
}

bool BasicProgressBarUI::ADJUSTTIMER = false;

void BasicProgressBarUI::init$() {
	$ProgressBarUI::init$();
	this->animationIndex = 0;
	this->delta = 0.0;
	this->maxPosition = 0;
}

$ComponentUI* BasicProgressBarUI::createUI($JComponent* x) {
	$init(BasicProgressBarUI);
	return $new(BasicProgressBarUI);
}

void BasicProgressBarUI::installUI($JComponent* c) {
	$set(this, progressBar, $cast($JProgressBar, c));
	installDefaults();
	installListeners();
	if ($nc(this->progressBar)->isIndeterminate()) {
		initIndeterminateValues();
	}
}

void BasicProgressBarUI::uninstallUI($JComponent* c) {
	if ($nc(this->progressBar)->isIndeterminate()) {
		cleanUpIndeterminateValues();
	}
	uninstallDefaults();
	uninstallListeners();
	$set(this, progressBar, nullptr);
}

void BasicProgressBarUI::installDefaults() {
	$init($Boolean);
	$LookAndFeel::installProperty(this->progressBar, "opaque"_s, $Boolean::TRUE);
	$LookAndFeel::installBorder(this->progressBar, "ProgressBar.border"_s);
	$LookAndFeel::installColorsAndFont(this->progressBar, "ProgressBar.background"_s, "ProgressBar.foreground"_s, "ProgressBar.font"_s);
	this->cellLength = $UIManager::getInt("ProgressBar.cellLength"_s);
	if (this->cellLength == 0) {
		this->cellLength = 1;
	}
	this->cellSpacing = $UIManager::getInt("ProgressBar.cellSpacing"_s);
	$set(this, selectionForeground, $UIManager::getColor("ProgressBar.selectionForeground"_s));
	$set(this, selectionBackground, $UIManager::getColor("ProgressBar.selectionBackground"_s));
}

void BasicProgressBarUI::uninstallDefaults() {
	$LookAndFeel::uninstallBorder(this->progressBar);
}

void BasicProgressBarUI::installListeners() {
	$set(this, changeListener, getHandler());
	$nc(this->progressBar)->addChangeListener(this->changeListener);
	$nc(this->progressBar)->addPropertyChangeListener($(getHandler()));
}

$BasicProgressBarUI$Handler* BasicProgressBarUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicProgressBarUI$Handler, this));
	}
	return this->handler;
}

void BasicProgressBarUI::startAnimationTimer() {
	if (this->animator == nullptr) {
		$set(this, animator, $new($BasicProgressBarUI$Animator, this));
	}
	$nc(this->animator)->start(getRepaintInterval());
}

void BasicProgressBarUI::stopAnimationTimer() {
	if (this->animator != nullptr) {
		$nc(this->animator)->stop();
	}
}

void BasicProgressBarUI::uninstallListeners() {
	$nc(this->progressBar)->removeChangeListener(this->changeListener);
	$nc(this->progressBar)->removePropertyChangeListener($(getHandler()));
	$set(this, handler, nullptr);
}

int32_t BasicProgressBarUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$ProgressBarUI::getBaseline(c, width, height);
	bool var$0 = $nc(this->progressBar)->isStringPainted();
	if (var$0 && $nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		$var($FontMetrics, metrics, $nc(this->progressBar)->getFontMetrics($($nc(this->progressBar)->getFont())));
		$var($Insets, insets, $nc(this->progressBar)->getInsets());
		int32_t y = $nc(insets)->top;
		height = height - insets->top - insets->bottom;
		int32_t var$1 = y;
		int32_t var$4 = height + $nc(metrics)->getAscent();
		int32_t var$3 = var$4 - metrics->getLeading();
		int32_t var$2 = (var$3 - metrics->getDescent()) / 2;
		return var$1 + var$2;
	}
	return -1;
}

$Component$BaselineResizeBehavior* BasicProgressBarUI::getBaselineResizeBehavior($JComponent* c) {
	$ProgressBarUI::getBaselineResizeBehavior(c);
	bool var$0 = $nc(this->progressBar)->isStringPainted();
	if (var$0 && $nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		$init($Component$BaselineResizeBehavior);
		return $Component$BaselineResizeBehavior::CENTER_OFFSET;
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

$Dimension* BasicProgressBarUI::getPreferredInnerHorizontal() {
	$var($Dimension, horizDim, $cast($Dimension, $DefaultLookup::get(this->progressBar, this, "ProgressBar.horizontalSize"_s)));
	if (horizDim == nullptr) {
		$assign(horizDim, $new($Dimension, 146, 12));
	}
	return horizDim;
}

$Dimension* BasicProgressBarUI::getPreferredInnerVertical() {
	$var($Dimension, vertDim, $cast($Dimension, $DefaultLookup::get(this->progressBar, this, "ProgressBar.verticalSize"_s)));
	if (vertDim == nullptr) {
		$assign(vertDim, $new($Dimension, 12, 146));
	}
	return vertDim;
}

$Color* BasicProgressBarUI::getSelectionForeground() {
	return this->selectionForeground;
}

$Color* BasicProgressBarUI::getSelectionBackground() {
	return this->selectionBackground;
}

int32_t BasicProgressBarUI::getCachedPercent() {
	return this->cachedPercent;
}

void BasicProgressBarUI::setCachedPercent(int32_t cachedPercent) {
	this->cachedPercent = cachedPercent;
}

int32_t BasicProgressBarUI::getCellLength() {
	if ($nc(this->progressBar)->isStringPainted()) {
		return 1;
	} else {
		return this->cellLength;
	}
}

void BasicProgressBarUI::setCellLength(int32_t cellLen) {
	this->cellLength = cellLen;
}

int32_t BasicProgressBarUI::getCellSpacing() {
	if ($nc(this->progressBar)->isStringPainted()) {
		return 0;
	} else {
		return this->cellSpacing;
	}
}

void BasicProgressBarUI::setCellSpacing(int32_t cellSpace) {
	this->cellSpacing = cellSpace;
}

int32_t BasicProgressBarUI::getAmountFull($Insets* b, int32_t width, int32_t height) {
	int32_t amountFull = 0;
	$var($BoundedRangeModel, model, $nc(this->progressBar)->getModel());
	int32_t var$0 = $nc(model)->getMaximum();
	if ((var$0 - model->getMinimum()) != 0) {
		if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
			amountFull = (int32_t)$Math::round(width * $nc(this->progressBar)->getPercentComplete());
		} else {
			amountFull = (int32_t)$Math::round(height * $nc(this->progressBar)->getPercentComplete());
		}
	}
	return amountFull;
}

void BasicProgressBarUI::paint($Graphics* g, $JComponent* c) {
	if ($nc(this->progressBar)->isIndeterminate()) {
		paintIndeterminate(g, c);
	} else {
		paintDeterminate(g, c);
	}
}

$Rectangle* BasicProgressBarUI::getBox($Rectangle* r$renamed) {
	$var($Rectangle, r, r$renamed);
	int32_t currentFrame = getAnimationIndex();
	int32_t middleFrame = this->numFrames / 2;
	if (sizeChanged() || this->delta == 0.0 || this->maxPosition == 0.0) {
		updateSizes();
	}
	$assign(r, getGenericBox(r));
	if (r == nullptr) {
		return nullptr;
	}
	if (middleFrame <= 0) {
		return nullptr;
	}
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		if (currentFrame < middleFrame) {
			$nc(r)->x = $nc(this->componentInnards)->x + (int32_t)$Math::round(this->delta * (double)currentFrame);
		} else {
			$nc(r)->x = this->maxPosition - (int32_t)$Math::round(this->delta * (currentFrame - middleFrame));
		}
	} else if (currentFrame < middleFrame) {
		$nc(r)->y = $nc(this->componentInnards)->y + (int32_t)$Math::round(this->delta * currentFrame);
	} else {
		$nc(r)->y = this->maxPosition - (int32_t)$Math::round(this->delta * (currentFrame - middleFrame));
	}
	return r;
}

void BasicProgressBarUI::updateSizes() {
	int32_t length = 0;
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		length = getBoxLength($nc(this->componentInnards)->width, $nc(this->componentInnards)->height);
		this->maxPosition = $nc(this->componentInnards)->x + $nc(this->componentInnards)->width - length;
	} else {
		length = getBoxLength($nc(this->componentInnards)->height, $nc(this->componentInnards)->width);
		this->maxPosition = $nc(this->componentInnards)->y + $nc(this->componentInnards)->height - length;
	}
	this->delta = 2.0 * (double)this->maxPosition / (double)this->numFrames;
}

$Rectangle* BasicProgressBarUI::getGenericBox($Rectangle* r$renamed) {
	$var($Rectangle, r, r$renamed);
	if (r == nullptr) {
		$assign(r, $new($Rectangle));
	}
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		$nc(r)->width = getBoxLength($nc(this->componentInnards)->width, $nc(this->componentInnards)->height);
		if (r->width < 0) {
			$assign(r, nullptr);
		} else {
			r->height = $nc(this->componentInnards)->height;
			r->y = $nc(this->componentInnards)->y;
		}
	} else {
		$nc(r)->height = getBoxLength($nc(this->componentInnards)->height, $nc(this->componentInnards)->width);
		if (r->height < 0) {
			$assign(r, nullptr);
		} else {
			r->width = $nc(this->componentInnards)->width;
			r->x = $nc(this->componentInnards)->x;
		}
	}
	return r;
}

int32_t BasicProgressBarUI::getBoxLength(int32_t availableLength, int32_t otherDimension) {
	return (int32_t)$Math::round(availableLength / 6.0);
}

void BasicProgressBarUI::paintIndeterminate($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Graphics2D, g))) {
		return;
	}
	$var($Insets, b, $nc(this->progressBar)->getInsets());
	int32_t barRectWidth = $nc(this->progressBar)->getWidth() - ($nc(b)->right + b->left);
	int32_t barRectHeight = $nc(this->progressBar)->getHeight() - (b->top + b->bottom);
	if (barRectWidth <= 0 || barRectHeight <= 0) {
		return;
	}
	$var($Graphics2D, g2, $cast($Graphics2D, g));
	$set(this, boxRect, getBox(this->boxRect));
	if (this->boxRect != nullptr) {
		$nc(g2)->setColor($($nc(this->progressBar)->getForeground()));
		g2->fillRect($nc(this->boxRect)->x, $nc(this->boxRect)->y, $nc(this->boxRect)->width, $nc(this->boxRect)->height);
	}
	if ($nc(this->progressBar)->isStringPainted()) {
		if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
			paintString(g2, b->left, b->top, barRectWidth, barRectHeight, $nc(this->boxRect)->x, $nc(this->boxRect)->width, b);
		} else {
			paintString(g2, b->left, b->top, barRectWidth, barRectHeight, $nc(this->boxRect)->y, $nc(this->boxRect)->height, b);
		}
	}
}

void BasicProgressBarUI::paintDeterminate($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Graphics2D, g))) {
		return;
	}
	$var($Insets, b, $nc(this->progressBar)->getInsets());
	int32_t barRectWidth = $nc(this->progressBar)->getWidth() - ($nc(b)->right + b->left);
	int32_t barRectHeight = $nc(this->progressBar)->getHeight() - (b->top + b->bottom);
	if (barRectWidth <= 0 || barRectHeight <= 0) {
		return;
	}
	int32_t cellLength = getCellLength();
	int32_t cellSpacing = getCellSpacing();
	int32_t amountFull = getAmountFull(b, barRectWidth, barRectHeight);
	$var($Graphics2D, g2, $cast($Graphics2D, g));
	$nc(g2)->setColor($($nc(this->progressBar)->getForeground()));
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		if (cellSpacing == 0 && amountFull > 0) {
			g2->setStroke($$new($BasicStroke, (float)barRectHeight, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_BEVEL));
		} else {
			g2->setStroke($$new($BasicStroke, (float)barRectHeight, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_BEVEL, 0.0f, $$new($floats, {
				(float)cellLength,
				(float)cellSpacing
			}), 0.0f));
		}
		if ($BasicGraphicsUtils::isLeftToRight(c)) {
			g2->drawLine(b->left, (barRectHeight / 2) + b->top, amountFull + b->left, (barRectHeight / 2) + b->top);
		} else {
			g2->drawLine((barRectWidth + b->left), (barRectHeight / 2) + b->top, barRectWidth + b->left - amountFull, (barRectHeight / 2) + b->top);
		}
	} else {
		if (cellSpacing == 0 && amountFull > 0) {
			g2->setStroke($$new($BasicStroke, (float)barRectWidth, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_BEVEL));
		} else {
			g2->setStroke($$new($BasicStroke, (float)barRectWidth, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_BEVEL, 0.0f, $$new($floats, {
				(float)cellLength,
				(float)cellSpacing
			}), 0.0f));
		}
		g2->drawLine(barRectWidth / 2 + b->left, b->top + barRectHeight, barRectWidth / 2 + b->left, b->top + barRectHeight - amountFull);
	}
	if ($nc(this->progressBar)->isStringPainted()) {
		paintString(g, b->left, b->top, barRectWidth, barRectHeight, amountFull, b);
	}
}

void BasicProgressBarUI::paintString($Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height, int32_t amountFull, $Insets* b) {
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		if ($BasicGraphicsUtils::isLeftToRight(this->progressBar)) {
			if ($nc(this->progressBar)->isIndeterminate()) {
				$set(this, boxRect, getBox(this->boxRect));
				paintString(g, x, y, width, height, $nc(this->boxRect)->x, $nc(this->boxRect)->width, b);
			} else {
				paintString(g, x, y, width, height, x, amountFull, b);
			}
		} else {
			paintString(g, x, y, width, height, x + width - amountFull, amountFull, b);
		}
	} else if ($nc(this->progressBar)->isIndeterminate()) {
		$set(this, boxRect, getBox(this->boxRect));
		paintString(g, x, y, width, height, $nc(this->boxRect)->y, $nc(this->boxRect)->height, b);
	} else {
		paintString(g, x, y, width, height, y + height - amountFull, amountFull, b);
	}
}

void BasicProgressBarUI::paintString($Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height, int32_t fillStart, int32_t amountFull, $Insets* b) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Graphics2D, g))) {
		return;
	}
	$var($Graphics2D, g2, $cast($Graphics2D, g));
	$var($String, progressString, $nc(this->progressBar)->getString());
	$nc(g2)->setFont($($nc(this->progressBar)->getFont()));
	$var($Point, renderLocation, getStringPlacement(g2, progressString, x, y, width, height));
	$var($Rectangle, oldClip, g2->getClipBounds());
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		g2->setColor($(getSelectionBackground()));
		$SwingUtilities2::drawString(static_cast<$JComponent*>(this->progressBar), static_cast<$Graphics*>(g2), progressString, $nc(renderLocation)->x, renderLocation->y);
		g2->setColor($(getSelectionForeground()));
		g2->clipRect(fillStart, y, amountFull, height);
		$SwingUtilities2::drawString(static_cast<$JComponent*>(this->progressBar), static_cast<$Graphics*>(g2), progressString, $nc(renderLocation)->x, renderLocation->y);
	} else {
		g2->setColor($(getSelectionBackground()));
		$init($Math);
		$var($AffineTransform, rotate, $AffineTransform::getRotateInstance($Math::PI / 2));
		g2->setFont($($nc($($nc(this->progressBar)->getFont()))->deriveFont(rotate)));
		$assign(renderLocation, getStringPlacement(g2, progressString, x, y, width, height));
		$SwingUtilities2::drawString(static_cast<$JComponent*>(this->progressBar), static_cast<$Graphics*>(g2), progressString, $nc(renderLocation)->x, renderLocation->y);
		g2->setColor($(getSelectionForeground()));
		g2->clipRect(x, fillStart, width, amountFull);
		$SwingUtilities2::drawString(static_cast<$JComponent*>(this->progressBar), static_cast<$Graphics*>(g2), progressString, $nc(renderLocation)->x, renderLocation->y);
	}
	g2->setClip(oldClip);
}

$Point* BasicProgressBarUI::getStringPlacement($Graphics* g, $String* progressString, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fontSizer, $SwingUtilities2::getFontMetrics(this->progressBar, g, $($nc(this->progressBar)->getFont())));
	int32_t stringWidth = $SwingUtilities2::stringWidth(this->progressBar, fontSizer, progressString);
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		int32_t var$0 = x + (int32_t)$Math::round(width / 2.0 - stringWidth / 2.0);
		int32_t var$1 = y;
		int32_t var$4 = height + $nc(fontSizer)->getAscent();
		int32_t var$3 = var$4 - fontSizer->getLeading();
		int32_t var$2 = ((var$3 - fontSizer->getDescent()) / 2);
		return $new($Point, var$0, var$1 + var$2);
	} else {
		int32_t var$6 = x;
		int32_t var$9 = width - $nc(fontSizer)->getAscent();
		int32_t var$8 = var$9 + fontSizer->getLeading();
		int32_t var$7 = ((var$8 + fontSizer->getDescent()) / 2);
		int32_t var$5 = var$6 + var$7;
		return $new($Point, var$5, y + (int32_t)$Math::round(height / 2.0 - stringWidth / 2.0));
	}
}

$Dimension* BasicProgressBarUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, nullptr);
	$var($Insets, border, $nc(this->progressBar)->getInsets());
	$var($FontMetrics, fontSizer, $nc(this->progressBar)->getFontMetrics($($nc(this->progressBar)->getFont())));
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		$assign(size, $new($Dimension, $(getPreferredInnerHorizontal())));
		if ($nc(this->progressBar)->isStringPainted()) {
			$var($String, progString, $nc(this->progressBar)->getString());
			int32_t stringWidth = $SwingUtilities2::stringWidth(this->progressBar, fontSizer, progString);
			if (stringWidth > size->width) {
				size->width = stringWidth;
			}
			int32_t var$0 = $nc(fontSizer)->getHeight();
			int32_t stringHeight = var$0 + fontSizer->getDescent();
			if (stringHeight > size->height) {
				size->height = stringHeight;
			}
		}
	} else {
		$assign(size, $new($Dimension, $(getPreferredInnerVertical())));
		if ($nc(this->progressBar)->isStringPainted()) {
			$var($String, progString, $nc(this->progressBar)->getString());
			int32_t var$1 = $nc(fontSizer)->getHeight();
			int32_t stringHeight = var$1 + fontSizer->getDescent();
			if (stringHeight > size->width) {
				size->width = stringHeight;
			}
			int32_t stringWidth = $SwingUtilities2::stringWidth(this->progressBar, fontSizer, progString);
			if (stringWidth > size->height) {
				size->height = stringWidth;
			}
		}
	}
	$nc(size)->width += $nc(border)->left + border->right;
	size->height += border->top + border->bottom;
	return size;
}

$Dimension* BasicProgressBarUI::getMinimumSize($JComponent* c) {
	$var($Dimension, pref, getPreferredSize(this->progressBar));
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		$nc(pref)->width = 10;
	} else {
		$nc(pref)->height = 10;
	}
	return pref;
}

$Dimension* BasicProgressBarUI::getMaximumSize($JComponent* c) {
	$var($Dimension, pref, getPreferredSize(this->progressBar));
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		$nc(pref)->width = $Short::MAX_VALUE;
	} else {
		$nc(pref)->height = $Short::MAX_VALUE;
	}
	return pref;
}

int32_t BasicProgressBarUI::getAnimationIndex() {
	return this->animationIndex;
}

int32_t BasicProgressBarUI::getFrameCount() {
	return this->numFrames;
}

void BasicProgressBarUI::setAnimationIndex(int32_t newValue) {
	if (this->animationIndex != newValue) {
		if (sizeChanged()) {
			this->animationIndex = newValue;
			this->maxPosition = 0;
			this->delta = 0.0;
			$nc(this->progressBar)->repaint();
			return;
		}
		$set(this, nextPaintRect, getBox(this->nextPaintRect));
		this->animationIndex = newValue;
		if (this->nextPaintRect != nullptr) {
			$set(this, boxRect, getBox(this->boxRect));
			if (this->boxRect != nullptr) {
				$nc(this->nextPaintRect)->add(this->boxRect);
			}
		}
	} else {
		return;
	}
	if (this->nextPaintRect != nullptr) {
		$nc(this->progressBar)->repaint(this->nextPaintRect);
	} else {
		$nc(this->progressBar)->repaint();
	}
}

bool BasicProgressBarUI::sizeChanged() {
	if ((this->oldComponentInnards == nullptr) || (this->componentInnards == nullptr)) {
		return true;
	}
	$nc(this->oldComponentInnards)->setRect(this->componentInnards);
	$set(this, componentInnards, $SwingUtilities::calculateInnerArea(this->progressBar, this->componentInnards));
	return !$nc(this->oldComponentInnards)->equals(this->componentInnards);
}

void BasicProgressBarUI::incrementAnimationIndex() {
	int32_t newValue = getAnimationIndex() + 1;
	if (newValue < this->numFrames) {
		setAnimationIndex(newValue);
	} else {
		setAnimationIndex(0);
	}
}

int32_t BasicProgressBarUI::getRepaintInterval() {
	return this->repaintInterval;
}

int32_t BasicProgressBarUI::initRepaintInterval() {
	this->repaintInterval = $DefaultLookup::getInt(this->progressBar, this, "ProgressBar.repaintInterval"_s, 50);
	return this->repaintInterval;
}

int32_t BasicProgressBarUI::getCycleTime() {
	return this->cycleTime;
}

int32_t BasicProgressBarUI::initCycleTime() {
	this->cycleTime = $DefaultLookup::getInt(this->progressBar, this, "ProgressBar.cycleTime"_s, 3000);
	return this->cycleTime;
}

void BasicProgressBarUI::initIndeterminateDefaults() {
	initRepaintInterval();
	initCycleTime();
	if (this->repaintInterval <= 0) {
		this->repaintInterval = 100;
	}
	if (this->repaintInterval > this->cycleTime) {
		this->cycleTime = this->repaintInterval * 20;
	} else {
		int32_t factor = $cast(int32_t, $Math::ceil(((double)this->cycleTime) / ((double)this->repaintInterval * 2)));
		this->cycleTime = this->repaintInterval * factor * 2;
	}
}

void BasicProgressBarUI::initIndeterminateValues() {
	initIndeterminateDefaults();
	this->numFrames = $div(this->cycleTime, this->repaintInterval);
	initAnimationIndex();
	$set(this, boxRect, $new($Rectangle));
	$set(this, nextPaintRect, $new($Rectangle));
	$set(this, componentInnards, $new($Rectangle));
	$set(this, oldComponentInnards, $new($Rectangle));
	$nc(this->progressBar)->addHierarchyListener($(getHandler()));
	if ($nc(this->progressBar)->isDisplayable()) {
		startAnimationTimer();
	}
}

void BasicProgressBarUI::cleanUpIndeterminateValues() {
	if ($nc(this->progressBar)->isDisplayable()) {
		stopAnimationTimer();
	}
	this->cycleTime = (this->repaintInterval = 0);
	this->numFrames = (this->animationIndex = 0);
	this->maxPosition = 0;
	this->delta = 0.0;
	$set(this, boxRect, ($assignField(this, nextPaintRect, nullptr)));
	$set(this, componentInnards, ($assignField(this, oldComponentInnards, nullptr)));
	$nc(this->progressBar)->removeHierarchyListener($(getHandler()));
}

void BasicProgressBarUI::initAnimationIndex() {
	bool var$0 = ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL);
	if (var$0 && ($BasicGraphicsUtils::isLeftToRight(this->progressBar))) {
		setAnimationIndex(0);
	} else {
		setAnimationIndex(this->numFrames / 2);
	}
}

void clinit$BasicProgressBarUI($Class* class$) {
	BasicProgressBarUI::ADJUSTTIMER = true;
}

BasicProgressBarUI::BasicProgressBarUI() {
}

$Class* BasicProgressBarUI::load$($String* name, bool initialize) {
	$loadClass(BasicProgressBarUI, name, initialize, &_BasicProgressBarUI_ClassInfo_, clinit$BasicProgressBarUI, allocate$BasicProgressBarUI);
	return class$;
}

$Class* BasicProgressBarUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax