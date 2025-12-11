#include <com/apple/laf/AquaTreeUI$TreeArrowMouseInputHandler.h>

#include <com/apple/laf/AquaTreeUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/InterruptedException.h>
#include <javax/swing/JTree.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/tree/AbstractLayoutCache.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $AquaTreeUI = ::com::apple::laf::AquaTreeUI;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $AbstractLayoutCache = ::javax::swing::tree::AbstractLayoutCache;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTreeUI$TreeArrowMouseInputHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTreeUI$TreeArrowMouseInputHandler, this$0)},
	{"fPathBounds", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(AquaTreeUI$TreeArrowMouseInputHandler, fPathBounds)},
	{"fIsLeaf", "Z", nullptr, $PROTECTED, $field(AquaTreeUI$TreeArrowMouseInputHandler, fIsLeaf)},
	{"fIsExpanded", "Z", nullptr, $PROTECTED, $field(AquaTreeUI$TreeArrowMouseInputHandler, fIsExpanded)},
	{"fHasBeenExpanded", "Z", nullptr, $PROTECTED, $field(AquaTreeUI$TreeArrowMouseInputHandler, fHasBeenExpanded)},
	{"fBounds", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(AquaTreeUI$TreeArrowMouseInputHandler, fBounds)},
	{"fVisibleRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(AquaTreeUI$TreeArrowMouseInputHandler, fVisibleRect)},
	{"fTrackingRow", "I", nullptr, 0, $field(AquaTreeUI$TreeArrowMouseInputHandler, fTrackingRow)},
	{"fInsets", "Ljava/awt/Insets;", nullptr, 0, $field(AquaTreeUI$TreeArrowMouseInputHandler, fInsets)},
	{"fBackground", "Ljava/awt/Color;", nullptr, 0, $field(AquaTreeUI$TreeArrowMouseInputHandler, fBackground)},
	{}
};

$MethodInfo _AquaTreeUI$TreeArrowMouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTreeUI;Ljavax/swing/tree/TreePath;)V", nullptr, 0, $method(static_cast<void(AquaTreeUI$TreeArrowMouseInputHandler::*)($AquaTreeUI*,$TreePath*)>(&AquaTreeUI$TreeArrowMouseInputHandler::init$))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"paintAnimation", "(Z)V", nullptr, $PROTECTED},
	{"paintAnimationFrame", "(I)V", nullptr, $PROTECTED},
	{"paintOneControl", "()V", nullptr, 0},
	{"removeFromSource", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaTreeUI$TreeArrowMouseInputHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTreeUI$TreeArrowMouseInputHandler", "com.apple.laf.AquaTreeUI", "TreeArrowMouseInputHandler", 0},
	{}
};

$ClassInfo _AquaTreeUI$TreeArrowMouseInputHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTreeUI$TreeArrowMouseInputHandler",
	"javax.swing.event.MouseInputAdapter",
	nullptr,
	_AquaTreeUI$TreeArrowMouseInputHandler_FieldInfo_,
	_AquaTreeUI$TreeArrowMouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTreeUI$TreeArrowMouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTreeUI"
};

$Object* allocate$AquaTreeUI$TreeArrowMouseInputHandler($Class* clazz) {
	return $of($alloc(AquaTreeUI$TreeArrowMouseInputHandler));
}

void AquaTreeUI$TreeArrowMouseInputHandler::init$($AquaTreeUI* this$0, $TreePath* path) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$MouseInputAdapter::init$();
	$set(this, fPathBounds, $new($Rectangle));
	$set(this$0, fTrackingPath, path);
	this$0->fIsPressed = true;
	this$0->fIsInBounds = true;
	$set(this, fPathBounds, this$0->getPathArrowBounds(path));
	$nc($($AquaTreeUI::access$400(this$0)))->addMouseListener(static_cast<$MouseListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(this))));
	$nc($($AquaTreeUI::access$500(this$0)))->addMouseMotionListener(static_cast<$MouseMotionListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(this))));
	$set(this, fBackground, $nc($($AquaTreeUI::access$600(this$0)))->getBackground());
	if (!$nc($($AquaTreeUI::access$700(this$0)))->isOpaque()) {
		$var($Component, p, $nc($($AquaTreeUI::access$800(this$0)))->getParent());
		if (p != nullptr) {
			$set(this, fBackground, p->getBackground());
		}
	}
	$set(this, fVisibleRect, $nc($($AquaTreeUI::access$900(this$0)))->getVisibleRect());
	$set(this, fInsets, $nc($($AquaTreeUI::access$1000(this$0)))->getInsets());
	if (this->fInsets == nullptr) {
		$set(this, fInsets, $new($Insets, 0, 0, 0, 0));
	}
	this->fIsLeaf = $nc($($AquaTreeUI::access$1100(this$0)))->isLeaf($($nc(path)->getLastPathComponent()));
	if (this->fIsLeaf) {
		this->fIsExpanded = (this->fHasBeenExpanded = false);
	} else {
		this->fIsExpanded = $nc($($AquaTreeUI::access$1200(this$0)))->getExpandedState(path);
		this->fHasBeenExpanded = $nc($($AquaTreeUI::access$1300(this$0)))->hasBeenExpanded(path);
	}
	$var($Rectangle, boundsBuffer, $new($Rectangle));
	$set(this, fBounds, $nc($($AquaTreeUI::access$1400(this$0)))->getBounds(this$0->fTrackingPath, boundsBuffer));
	$nc(this->fBounds)->x += $nc(this->fInsets)->left;
	$nc(this->fBounds)->y += $nc(this->fInsets)->top;
	this->fTrackingRow = this$0->getRowForPath(this$0->fTrackingPath);
	paintOneControl();
}

void AquaTreeUI$TreeArrowMouseInputHandler::mouseDragged($MouseEvent* e) {
	int32_t var$0 = $nc(e)->getX();
	this->this$0->fIsInBounds = $nc(this->fPathBounds)->contains(var$0, e->getY());
	paintOneControl();
}

void AquaTreeUI$TreeArrowMouseInputHandler::mouseExited($MouseEvent* e) {
	int32_t var$0 = $nc(e)->getX();
	this->this$0->fIsInBounds = $nc(this->fPathBounds)->contains(var$0, e->getY());
	paintOneControl();
}

void AquaTreeUI$TreeArrowMouseInputHandler::mouseReleased($MouseEvent* e) {
	if ($AquaTreeUI::access$1500(this->this$0) == nullptr) {
		return;
	}
	if (this->this$0->fIsPressed) {
		bool wasInBounds = this->this$0->fIsInBounds;
		this->this$0->fIsPressed = false;
		this->this$0->fIsInBounds = false;
		if (wasInBounds) {
			this->fIsExpanded = !this->fIsExpanded;
			paintAnimation(this->fIsExpanded);
			if ($nc(e)->isAltDown()) {
				if (this->fIsExpanded) {
					this->this$0->expandNode(this->fTrackingRow, true);
				} else {
					this->this$0->collapseNode(this->fTrackingRow, true);
				}
			} else {
				$AquaTreeUI::access$1600(this->this$0, this->this$0->fTrackingPath);
			}
		}
	}
	$set(this->this$0, fTrackingPath, nullptr);
	removeFromSource();
}

void AquaTreeUI$TreeArrowMouseInputHandler::paintAnimation(bool expanding) {
	if (expanding) {
		paintAnimationFrame(1);
		paintAnimationFrame(2);
		paintAnimationFrame(3);
	} else {
		paintAnimationFrame(3);
		paintAnimationFrame(2);
		paintAnimationFrame(1);
	}
	this->this$0->fAnimationFrame = -1;
}

void AquaTreeUI$TreeArrowMouseInputHandler::paintAnimationFrame(int32_t frame) {
	this->this$0->fAnimationFrame = frame;
	paintOneControl();
	try {
		$Thread::sleep(20);
	} catch ($InterruptedException& e) {
	}
}

void AquaTreeUI$TreeArrowMouseInputHandler::paintOneControl() {
	$useLocalCurrentObjectStackCache();
	if ($AquaTreeUI::access$1700(this->this$0) == nullptr) {
		return;
	}
	$var($Graphics, g, $nc($($AquaTreeUI::access$1800(this->this$0)))->getGraphics());
	if (g == nullptr) {
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			$nc(g)->setClip(this->fVisibleRect);
			g->setColor(this->fBackground);
			g->fillRect($nc(this->fPathBounds)->x, $nc(this->fPathBounds)->y, $nc(this->fPathBounds)->width, $nc(this->fPathBounds)->height);
			if (this->this$0->fTrackingPath == nullptr) {
				return$1 = true;
				goto $finally;
			}
			$var($TreePath, parentPath, $nc(this->this$0->fTrackingPath)->getParentPath());
			if (parentPath != nullptr) {
				this->this$0->paintVerticalPartOfLeg(g, this->fPathBounds, this->fInsets, parentPath);
				this->this$0->paintHorizontalPartOfLeg(g, this->fPathBounds, this->fInsets, this->fBounds, this->this$0->fTrackingPath, this->fTrackingRow, this->fIsExpanded, this->fHasBeenExpanded, this->fIsLeaf);
			} else if ($AquaTreeUI::access$1900(this->this$0) && this->fTrackingRow == 0) {
				this->this$0->paintHorizontalPartOfLeg(g, this->fPathBounds, this->fInsets, this->fBounds, this->this$0->fTrackingPath, this->fTrackingRow, this->fIsExpanded, this->fHasBeenExpanded, this->fIsLeaf);
			}
			this->this$0->paintExpandControl(g, this->fPathBounds, this->fInsets, this->fBounds, this->this$0->fTrackingPath, this->fTrackingRow, this->fIsExpanded, this->fHasBeenExpanded, this->fIsLeaf);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$nc(g)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void AquaTreeUI$TreeArrowMouseInputHandler::removeFromSource() {
	$useLocalCurrentObjectStackCache();
	$nc($($AquaTreeUI::access$2000(this->this$0)))->removeMouseListener(static_cast<$MouseListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(this))));
	$nc($($AquaTreeUI::access$2100(this->this$0)))->removeMouseMotionListener(static_cast<$MouseMotionListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(this))));
}

AquaTreeUI$TreeArrowMouseInputHandler::AquaTreeUI$TreeArrowMouseInputHandler() {
}

$Class* AquaTreeUI$TreeArrowMouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(AquaTreeUI$TreeArrowMouseInputHandler, name, initialize, &_AquaTreeUI$TreeArrowMouseInputHandler_ClassInfo_, allocate$AquaTreeUI$TreeArrowMouseInputHandler);
	return class$;
}

$Class* AquaTreeUI$TreeArrowMouseInputHandler::class$ = nullptr;

		} // laf
	} // apple
} // com