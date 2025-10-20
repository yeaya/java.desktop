#include <com/sun/java/swing/plaf/windows/WindowsProgressBarUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Composite.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ProgressBarUI.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI.h>
#include <jcpp.h>

#undef CAP_BUTT
#undef FALSE
#undef HORIZONTAL
#undef JOIN_BEVEL
#undef PP_BAR
#undef PP_BARVERT
#undef PP_CHUNK
#undef PP_CHUNKVERT
#undef PP_PROGRESS
#undef PROGRESSCHUNKSIZE
#undef PROGRESSSPACESIZE
#undef SRC_OVER
#undef VERTICAL

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Composite = ::java::awt::Composite;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JProgressBar = ::javax::swing::JProgressBar;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ProgressBarUI = ::javax::swing::plaf::ProgressBarUI;
using $BasicProgressBarUI = ::javax::swing::plaf::basic::BasicProgressBarUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsProgressBarUI_FieldInfo_[] = {
	{"previousFullBox", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(WindowsProgressBarUI, previousFullBox)},
	{"indeterminateInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(WindowsProgressBarUI, indeterminateInsets)},
	{}
};

$MethodInfo _WindowsProgressBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsProgressBarUI::*)()>(&WindowsProgressBarUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsProgressBarUI::createUI))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBox", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getBoxLength", "(II)I", nullptr, $PROTECTED},
	{"getFullChunkBounds", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(WindowsProgressBarUI::*)($Rectangle*)>(&WindowsProgressBarUI::getFullChunkBounds))},
	{"getPreferredInnerHorizontal", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getPreferredInnerVertical", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paintDeterminate", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"paintIndeterminate", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"paintIndeterminateFrame", "(Ljava/awt/Rectangle;Ljava/awt/Graphics2D;ZII)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsProgressBarUI::*)($Rectangle*,$Graphics2D*,bool,int32_t,int32_t)>(&WindowsProgressBarUI::paintIndeterminateFrame))},
	{"paintXPBackground", "(Ljava/awt/Graphics;ZII)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsProgressBarUI::*)($Graphics*,bool,int32_t,int32_t)>(&WindowsProgressBarUI::paintXPBackground))},
	{"setAnimationIndex", "(I)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _WindowsProgressBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsProgressBarUI",
	"javax.swing.plaf.basic.BasicProgressBarUI",
	nullptr,
	_WindowsProgressBarUI_FieldInfo_,
	_WindowsProgressBarUI_MethodInfo_
};

$Object* allocate$WindowsProgressBarUI($Class* clazz) {
	return $of($alloc(WindowsProgressBarUI));
}

void WindowsProgressBarUI::init$() {
	$BasicProgressBarUI::init$();
}

$ComponentUI* WindowsProgressBarUI::createUI($JComponent* x) {
	$init(WindowsProgressBarUI);
	return $new(WindowsProgressBarUI);
}

void WindowsProgressBarUI::installDefaults() {
	$BasicProgressBarUI::installDefaults();
	if ($XPStyle::getXP() != nullptr) {
		$init($Boolean);
		$LookAndFeel::installProperty(this->progressBar, "opaque"_s, $Boolean::FALSE);
		$nc(this->progressBar)->setBorder(nullptr);
		$set(this, indeterminateInsets, $UIManager::getInsets("ProgressBar.indeterminateInsets"_s));
	}
}

int32_t WindowsProgressBarUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	int32_t baseline = $BasicProgressBarUI::getBaseline(c, width, height);
	bool var$1 = $XPStyle::getXP() != nullptr;
	bool var$0 = var$1 && $nc(this->progressBar)->isStringPainted();
	if (var$0 && $nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		$var($FontMetrics, metrics, $nc(this->progressBar)->getFontMetrics($($nc(this->progressBar)->getFont())));
		int32_t y = $nc($($nc(this->progressBar)->getInsets()))->top;
		if ($nc(this->progressBar)->isIndeterminate()) {
			y = -1;
			--height;
		} else {
			y = 0;
			height -= 3;
		}
		int32_t var$2 = y;
		int32_t var$5 = height + $nc(metrics)->getAscent();
		int32_t var$4 = var$5 - metrics->getLeading();
		int32_t var$3 = (var$4 - metrics->getDescent()) / 2;
		baseline = var$2 + var$3;
	}
	return baseline;
}

$Dimension* WindowsProgressBarUI::getPreferredInnerHorizontal() {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		$var($XPStyle$Skin, skin, xp->getSkin(this->progressBar, $TMSchema$Part::PP_BAR));
		int32_t var$0 = $cast(int32_t, $nc($($BasicProgressBarUI::getPreferredInnerHorizontal()))->getWidth());
		return $new($Dimension, var$0, $nc(skin)->getHeight());
	}
	return $BasicProgressBarUI::getPreferredInnerHorizontal();
}

$Dimension* WindowsProgressBarUI::getPreferredInnerVertical() {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		$var($XPStyle$Skin, skin, xp->getSkin(this->progressBar, $TMSchema$Part::PP_BARVERT));
		int32_t var$0 = $nc(skin)->getWidth();
		return $new($Dimension, var$0, $cast(int32_t, $nc($($BasicProgressBarUI::getPreferredInnerVertical()))->getHeight()));
	}
	return $BasicProgressBarUI::getPreferredInnerVertical();
}

void WindowsProgressBarUI::paintDeterminate($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		bool vertical = ($nc(this->progressBar)->getOrientation() == $JProgressBar::VERTICAL);
		bool isLeftToRight = $WindowsGraphicsUtils::isLeftToRight(c);
		int32_t barRectWidth = $nc(this->progressBar)->getWidth();
		int32_t barRectHeight = $nc(this->progressBar)->getHeight() - 1;
		int32_t amountFull = getAmountFull(nullptr, barRectWidth, barRectHeight);
		paintXPBackground(g, vertical, barRectWidth, barRectHeight);
		if ($nc(this->progressBar)->isStringPainted()) {
			$nc(g)->setColor($($nc(this->progressBar)->getForeground()));
			barRectHeight -= 2;
			barRectWidth -= 2;
			if (barRectWidth <= 0 || barRectHeight <= 0) {
				return;
			}
			$var($Graphics2D, g2, $cast($Graphics2D, g));
			g2->setStroke($$new($BasicStroke, (float)(vertical ? barRectWidth : barRectHeight), $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_BEVEL));
			if (!vertical) {
				if (isLeftToRight) {
					g2->drawLine(2, barRectHeight / 2 + 1, amountFull - 2, barRectHeight / 2 + 1);
				} else {
					g2->drawLine(2 + barRectWidth, barRectHeight / 2 + 1, 2 + barRectWidth - (amountFull - 2), barRectHeight / 2 + 1);
				}
				paintString(g, 0, 0, barRectWidth, barRectHeight, amountFull, nullptr);
			} else {
				g2->drawLine(barRectWidth / 2 + 1, barRectHeight + 1, barRectWidth / 2 + 1, barRectHeight + 1 - amountFull + 2);
				paintString(g, 2, 2, barRectWidth, barRectHeight, amountFull, nullptr);
			}
		} else {
			$init($TMSchema$Part);
			$var($XPStyle$Skin, skin, xp->getSkin(this->progressBar, vertical ? $TMSchema$Part::PP_CHUNKVERT : $TMSchema$Part::PP_CHUNK));
			int32_t thickness = 0;
			if (vertical) {
				thickness = barRectWidth - 5;
			} else {
				thickness = barRectHeight - 5;
			}
			$init($TMSchema$Prop);
			int32_t chunkSize = xp->getInt(this->progressBar, $TMSchema$Part::PP_PROGRESS, nullptr, $TMSchema$Prop::PROGRESSCHUNKSIZE, 2);
			int32_t spaceSize = xp->getInt(this->progressBar, $TMSchema$Part::PP_PROGRESS, nullptr, $TMSchema$Prop::PROGRESSSPACESIZE, 0);
			int32_t nChunks = $div((amountFull - 4), (chunkSize + spaceSize));
			if (spaceSize > 0 && (nChunks * (chunkSize + spaceSize) + chunkSize) < (amountFull - 4)) {
				++nChunks;
			}
			for (int32_t i = 0; i < nChunks; ++i) {
				if (vertical) {
					$nc(skin)->paintSkin(g, 3, barRectHeight - i * (chunkSize + spaceSize) - chunkSize - 2, thickness, chunkSize, nullptr);
				} else if (isLeftToRight) {
					$nc(skin)->paintSkin(g, 4 + i * (chunkSize + spaceSize), 2, chunkSize, thickness, nullptr);
				} else {
					$nc(skin)->paintSkin(g, barRectWidth - (2 + (i + 1) * (chunkSize + spaceSize)), 2, chunkSize, thickness, nullptr);
				}
			}
		}
	} else {
		$BasicProgressBarUI::paintDeterminate(g, c);
	}
}

void WindowsProgressBarUI::setAnimationIndex(int32_t newValue) {
	$useLocalCurrentObjectStackCache();
	$BasicProgressBarUI::setAnimationIndex(newValue);
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		if (this->boxRect != nullptr) {
			$var($Rectangle, chunk, getFullChunkBounds(this->boxRect));
			if (this->previousFullBox != nullptr) {
				$nc(chunk)->add(this->previousFullBox);
			}
			$nc(this->progressBar)->repaint(chunk);
		} else {
			$nc(this->progressBar)->repaint();
		}
	}
}

int32_t WindowsProgressBarUI::getBoxLength(int32_t availableLength, int32_t otherDimension) {
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		return 6;
	}
	return $BasicProgressBarUI::getBoxLength(availableLength, otherDimension);
}

$Rectangle* WindowsProgressBarUI::getBox($Rectangle* r) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, rect, $BasicProgressBarUI::getBox(r));
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		bool vertical = ($nc(this->progressBar)->getOrientation() == $JProgressBar::VERTICAL);
		$init($TMSchema$Part);
		$TMSchema$Part* part = vertical ? $TMSchema$Part::PP_BARVERT : $TMSchema$Part::PP_BAR;
		$var($Insets, ins, this->indeterminateInsets);
		int32_t currentFrame = getAnimationIndex();
		int32_t framecount = getFrameCount() / 2;
		$init($TMSchema$Prop);
		int32_t gap = xp->getInt(this->progressBar, $TMSchema$Part::PP_PROGRESS, nullptr, $TMSchema$Prop::PROGRESSSPACESIZE, 0);
		currentFrame = $mod(currentFrame, framecount);
		if (!vertical) {
			$nc(rect)->y = rect->y + $nc(ins)->top;
			rect->height = $nc(this->progressBar)->getHeight() - ins->top - ins->bottom;
			int32_t len = $nc(this->progressBar)->getWidth() - ins->left - ins->right;
			len += (rect->width + gap) * 2;
			double delta = (double)(len) / (double)framecount;
			rect->x = $cast(int32_t, (delta * currentFrame)) + ins->left;
		} else {
			$nc(rect)->x = rect->x + $nc(ins)->left;
			rect->width = $nc(this->progressBar)->getWidth() - ins->left - ins->right;
			int32_t len = $nc(this->progressBar)->getHeight() - ins->top - ins->bottom;
			len += (rect->height + gap) * 2;
			double delta = (double)(len) / (double)framecount;
			rect->y = $cast(int32_t, (delta * currentFrame)) + ins->top;
		}
	}
	return rect;
}

void WindowsProgressBarUI::paintIndeterminate($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		bool vertical = ($nc(this->progressBar)->getOrientation() == $JProgressBar::VERTICAL);
		int32_t barRectWidth = $nc(this->progressBar)->getWidth();
		int32_t barRectHeight = $nc(this->progressBar)->getHeight();
		paintXPBackground(g, vertical, barRectWidth, barRectHeight);
		$set(this, boxRect, getBox(this->boxRect));
		if (this->boxRect != nullptr) {
			$nc(g)->setColor($($nc(this->progressBar)->getForeground()));
			if (!($instanceOf($Graphics2D, g))) {
				return;
			}
			paintIndeterminateFrame(this->boxRect, $cast($Graphics2D, g), vertical, barRectWidth, barRectHeight);
			if ($nc(this->progressBar)->isStringPainted()) {
				if (!vertical) {
					paintString(g, -1, -1, barRectWidth, barRectHeight, 0, nullptr);
				} else {
					paintString(g, 1, 1, barRectWidth, barRectHeight, 0, nullptr);
				}
			}
		}
	} else {
		$BasicProgressBarUI::paintIndeterminate(g, c);
	}
}

$Rectangle* WindowsProgressBarUI::getFullChunkBounds($Rectangle* box) {
	bool vertical = ($nc(this->progressBar)->getOrientation() == $JProgressBar::VERTICAL);
	$var($XPStyle, xp, $XPStyle::getXP());
	$init($TMSchema$Part);
	$init($TMSchema$Prop);
	int32_t gap = (xp != nullptr) ? $nc(xp)->getInt(this->progressBar, $TMSchema$Part::PP_PROGRESS, nullptr, $TMSchema$Prop::PROGRESSSPACESIZE, 0) : 0;
	if (!vertical) {
		int32_t chunksize = $nc(box)->width + gap;
		return $new($Rectangle, box->x - chunksize * 2, box->y, chunksize * 3, box->height);
	} else {
		int32_t chunksize = $nc(box)->height + gap;
		return $new($Rectangle, box->x, box->y - chunksize * 2, box->width, chunksize * 3);
	}
}

void WindowsProgressBarUI::paintIndeterminateFrame($Rectangle* box, $Graphics2D* g, bool vertical, int32_t bgwidth, int32_t bgheight) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp == nullptr) {
		return;
	}
	$var($Graphics2D, gfx, $cast($Graphics2D, $nc(g)->create()));
	$init($TMSchema$Part);
	$TMSchema$Part* part = vertical ? $TMSchema$Part::PP_BARVERT : $TMSchema$Part::PP_BAR;
	$TMSchema$Part* chunk = vertical ? $TMSchema$Part::PP_CHUNKVERT : $TMSchema$Part::PP_CHUNK;
	$init($TMSchema$Prop);
	int32_t gap = $nc(xp)->getInt(this->progressBar, $TMSchema$Part::PP_PROGRESS, nullptr, $TMSchema$Prop::PROGRESSSPACESIZE, 0);
	int32_t deltax = 0;
	int32_t deltay = 0;
	if (!vertical) {
		deltax = -$nc(box)->width - gap;
		deltay = 0;
	} else {
		deltax = 0;
		deltay = -$nc(box)->height - gap;
	}
	$var($Rectangle, fullBox, getFullChunkBounds(box));
	$set(this, previousFullBox, fullBox);
	$var($Insets, ins, this->indeterminateInsets);
	$var($Rectangle, progbarExtents, $new($Rectangle, $nc(ins)->left, ins->top, bgwidth - ins->left - ins->right, bgheight - ins->top - ins->bottom));
	$var($Rectangle, repaintArea, progbarExtents->intersection(fullBox));
	$nc(gfx)->clip(repaintArea);
	$var($XPStyle$Skin, skin, xp->getSkin(this->progressBar, chunk));
	gfx->setComposite($($AlphaComposite::getInstance($AlphaComposite::SRC_OVER, 0.8f)));
	$nc(skin)->paintSkin(gfx, $nc(box)->x, box->y, box->width, box->height, nullptr);
	$nc(box)->translate(deltax, deltay);
	gfx->setComposite($($AlphaComposite::getInstance($AlphaComposite::SRC_OVER, 0.5f)));
	skin->paintSkin(gfx, box->x, box->y, box->width, box->height, nullptr);
	box->translate(deltax, deltay);
	gfx->setComposite($($AlphaComposite::getInstance($AlphaComposite::SRC_OVER, 0.2f)));
	skin->paintSkin(gfx, box->x, box->y, box->width, box->height, nullptr);
	gfx->dispose();
}

void WindowsProgressBarUI::paintXPBackground($Graphics* g, bool vertical, int32_t barRectWidth, int32_t barRectHeight) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp == nullptr) {
		return;
	}
	$init($TMSchema$Part);
	$TMSchema$Part* part = vertical ? $TMSchema$Part::PP_BARVERT : $TMSchema$Part::PP_BAR;
	$var($XPStyle$Skin, skin, $nc(xp)->getSkin(this->progressBar, part));
	$nc(skin)->paintSkin(g, 0, 0, barRectWidth, barRectHeight, nullptr);
}

WindowsProgressBarUI::WindowsProgressBarUI() {
}

$Class* WindowsProgressBarUI::load$($String* name, bool initialize) {
	$loadClass(WindowsProgressBarUI, name, initialize, &_WindowsProgressBarUI_ClassInfo_, allocate$WindowsProgressBarUI);
	return class$;
}

$Class* WindowsProgressBarUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com