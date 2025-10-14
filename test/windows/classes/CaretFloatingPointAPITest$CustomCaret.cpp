#include <CaretFloatingPointAPITest$CustomCaret.h>

#include <CaretFloatingPointAPITest$CustomCaret$CaretMouseListener.h>
#include <CaretFloatingPointAPITest.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/geom/Line2D$Float.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

using $CaretFloatingPointAPITest = ::CaretFloatingPointAPITest;
using $CaretFloatingPointAPITest$CustomCaret$CaretMouseListener = ::CaretFloatingPointAPITest$CustomCaret$CaretMouseListener;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $Line2D = ::java::awt::geom::Line2D;
using $Line2D$Float = ::java::awt::geom::Line2D$Float;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $Document = ::javax::swing::text::Document;
using $Highlighter = ::javax::swing::text::Highlighter;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LayeredHighlighter$LayerPainter = ::javax::swing::text::LayeredHighlighter$LayerPainter;
using $Position$Bias = ::javax::swing::text::Position$Bias;

class CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret : public $Runnable {
	$class(CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret, $NO_CLASS_INIT, $Runnable)
public:
	void init$(CaretFloatingPointAPITest$CustomCaret* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->repaintNewCaret();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret>());
	}
	CaretFloatingPointAPITest$CustomCaret* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret, inst$)},
	{}
};
$MethodInfo CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret::methodInfos[3] = {
	{"<init>", "(LCaretFloatingPointAPITest$CustomCaret;)V", nullptr, $PUBLIC, $method(static_cast<void(CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret::*)(CaretFloatingPointAPITest$CustomCaret*)>(&CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret::classInfo$ = {
	$PUBLIC | $FINAL,
	"CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret::load$($String* name, bool initialize) {
	$loadClass(CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret::class$ = nullptr;

class CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1 : public $Runnable {
	$class(CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(CaretFloatingPointAPITest$CustomCaret* inst, $Rectangle* nloc) {
		$set(this, inst$, inst);
		$set(this, nloc, nloc);
	}
	virtual void run() override {
		$nc(inst$)->lambda$adjustVisibility$0(nloc);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1>());
	}
	CaretFloatingPointAPITest$CustomCaret* inst$ = nullptr;
	$Rectangle* nloc = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1, inst$)},
	{"nloc", "Ljava/awt/Rectangle;", nullptr, $PUBLIC, $field(CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1, nloc)},
	{}
};
$MethodInfo CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1::methodInfos[3] = {
	{"<init>", "(LCaretFloatingPointAPITest$CustomCaret;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1::*)(CaretFloatingPointAPITest$CustomCaret*,$Rectangle*)>(&CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1::load$($String* name, bool initialize) {
	$loadClass(CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1::class$ = nullptr;

$FieldInfo _CaretFloatingPointAPITest$CustomCaret_FieldInfo_[] = {
	{"component", "Ljavax/swing/text/JTextComponent;", nullptr, $PRIVATE, $field(CaretFloatingPointAPITest$CustomCaret, component)},
	{"visible", "Z", nullptr, $PRIVATE, $field(CaretFloatingPointAPITest$CustomCaret, visible)},
	{"selectionVisible", "Z", nullptr, $PRIVATE, $field(CaretFloatingPointAPITest$CustomCaret, selectionVisible)},
	{"blinkRate", "I", nullptr, 0, $field(CaretFloatingPointAPITest$CustomCaret, blinkRate)},
	{"dot", "I", nullptr, 0, $field(CaretFloatingPointAPITest$CustomCaret, dot)},
	{"mark", "I", nullptr, 0, $field(CaretFloatingPointAPITest$CustomCaret, mark)},
	{"dotBias", "Ljavax/swing/text/Position$Bias;", nullptr, 0, $field(CaretFloatingPointAPITest$CustomCaret, dotBias)},
	{"markBias", "Ljavax/swing/text/Position$Bias;", nullptr, 0, $field(CaretFloatingPointAPITest$CustomCaret, markBias)},
	{"selectionTag", "Ljava/lang/Object;", nullptr, 0, $field(CaretFloatingPointAPITest$CustomCaret, selectionTag)},
	{"magicCaretPosition", "Ljava/awt/geom/Point2D;", nullptr, 0, $field(CaretFloatingPointAPITest$CustomCaret, magicCaretPosition)},
	{"mouseListener", "Ljava/awt/event/MouseListener;", nullptr, $PRIVATE, $field(CaretFloatingPointAPITest$CustomCaret, mouseListener)},
	{}
};

$MethodInfo _CaretFloatingPointAPITest$CustomCaret_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CaretFloatingPointAPITest$CustomCaret::*)()>(&CaretFloatingPointAPITest$CustomCaret::init$))},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"adjustVisibility", "(Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"changeCaretPosition", "(ILjavax/swing/text/Position$Bias;)V", nullptr, 0},
	{"damage", "(Ljava/awt/Rectangle;)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"deinstall", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC},
	{"getBlinkRate", "()I", nullptr, $PUBLIC},
	{"getCaretRectangle", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/Rectangle2D;", nullptr, 0},
	{"getDot", "()I", nullptr, $PUBLIC},
	{"getMagicCaretPosition", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getMark", "()I", nullptr, $PUBLIC},
	{"getSelectionPainter", "()Ljavax/swing/text/Highlighter$HighlightPainter;", nullptr, $PROTECTED},
	{"handleSetDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, 0},
	{"install", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC},
	{"isSelectionVisible", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"lambda$adjustVisibility$0", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CaretFloatingPointAPITest$CustomCaret::*)($Rectangle*)>(&CaretFloatingPointAPITest$CustomCaret::lambda$adjustVisibility$0))},
	{"moveDot", "(I)V", nullptr, $PUBLIC},
	{"moveDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, $PRIVATE, $method(static_cast<void(CaretFloatingPointAPITest$CustomCaret::*)(int32_t,$Position$Bias*)>(&CaretFloatingPointAPITest$CustomCaret::moveDot))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"repaint", "(Ljava/awt/Rectangle;)V", nullptr, 0},
	{"repaintNewCaret", "()V", nullptr, 0},
	{"setBlinkRate", "(I)V", nullptr, $PUBLIC},
	{"setDot", "(I)V", nullptr, $PUBLIC},
	{"setDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, $PRIVATE, $method(static_cast<void(CaretFloatingPointAPITest$CustomCaret::*)(int32_t,$Position$Bias*)>(&CaretFloatingPointAPITest$CustomCaret::setDot))},
	{"setMagicCaretPosition", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"setSelectionVisible", "(Z)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"updateSelection", "()V", nullptr, $PRIVATE, $method(static_cast<void(CaretFloatingPointAPITest$CustomCaret::*)()>(&CaretFloatingPointAPITest$CustomCaret::updateSelection))},
	{}
};

$InnerClassInfo _CaretFloatingPointAPITest$CustomCaret_InnerClassesInfo_[] = {
	{"CaretFloatingPointAPITest$CustomCaret", "CaretFloatingPointAPITest", "CustomCaret", $STATIC},
	{"CaretFloatingPointAPITest$CustomCaret$CaretMouseListener", "CaretFloatingPointAPITest$CustomCaret", "CaretMouseListener", $PRIVATE},
	{}
};

$ClassInfo _CaretFloatingPointAPITest$CustomCaret_ClassInfo_ = {
	$ACC_SUPER,
	"CaretFloatingPointAPITest$CustomCaret",
	"java.lang.Object",
	"javax.swing.text.Caret",
	_CaretFloatingPointAPITest$CustomCaret_FieldInfo_,
	_CaretFloatingPointAPITest$CustomCaret_MethodInfo_,
	nullptr,
	nullptr,
	_CaretFloatingPointAPITest$CustomCaret_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CaretFloatingPointAPITest"
};

$Object* allocate$CaretFloatingPointAPITest$CustomCaret($Class* clazz) {
	return $of($alloc(CaretFloatingPointAPITest$CustomCaret));
}

void CaretFloatingPointAPITest$CustomCaret::init$() {
	this->selectionVisible = true;
	$set(this, mouseListener, $new($CaretFloatingPointAPITest$CustomCaret$CaretMouseListener, this));
}

void CaretFloatingPointAPITest$CustomCaret::install($JTextComponent* c) {
	$set(this, component, c);
	$nc(c)->addMouseListener(this->mouseListener);
}

void CaretFloatingPointAPITest$CustomCaret::deinstall($JTextComponent* c) {
	$nc(c)->removeMouseListener(this->mouseListener);
	$set(this, component, nullptr);
}

void CaretFloatingPointAPITest$CustomCaret::paint($Graphics* g) {
	if (this->component == nullptr) {
		return;
	}
	int32_t dot = getDot();
	$var($Rectangle2D, r, nullptr);
	try {
		$assign(r, $nc(this->component)->modelToView2D(dot));
	} catch ($BadLocationException&) {
		$var($BadLocationException, e, $catch());
		return;
	}
	if (r == nullptr) {
		return;
	}
	$var($Rectangle2D, cr, getCaretRectangle(r));
	repaint($($nc(cr)->getBounds()));
	$nc(g)->setColor($($nc(this->component)->getCaretColor()));
	float cx = (float)$nc(cr)->getX();
	float cy = (float)cr->getY();
	float cw = (float)cr->getWidth();
	float ch = (float)cr->getHeight();
	float c = cx + cw / 2;
	$var($Graphics2D, g2d, $cast($Graphics2D, g));
	g2d->draw($$new($Line2D$Float, c, cy, c, cy + ch));
	g2d->draw($$new($Line2D$Float, cx, cy, cx + cw, cy));
	g2d->draw($$new($Line2D$Float, cx, cy + ch, cx + cw, cy + ch));
}

void CaretFloatingPointAPITest$CustomCaret::repaint($Rectangle* r) {
	$nc(this->component)->repaint(r);
}

$Rectangle2D* CaretFloatingPointAPITest$CustomCaret::getCaretRectangle($Rectangle2D* r) {
	int32_t d = 3;
	double cx = $nc(r)->getX() - d;
	double cy = r->getY();
	double cw = (double)(2 * d);
	double ch = r->getHeight();
	return $new($Rectangle2D$Double, cx, cy, cw, ch);
}

void CaretFloatingPointAPITest$CustomCaret::addChangeListener($ChangeListener* l) {
}

void CaretFloatingPointAPITest$CustomCaret::removeChangeListener($ChangeListener* l) {
}

bool CaretFloatingPointAPITest$CustomCaret::isVisible() {
	return this->visible;
}

void CaretFloatingPointAPITest$CustomCaret::setVisible(bool v) {
	this->visible = true;
}

bool CaretFloatingPointAPITest$CustomCaret::isSelectionVisible() {
	return this->selectionVisible;
}

void CaretFloatingPointAPITest$CustomCaret::setSelectionVisible(bool v) {
	this->selectionVisible = v;
	updateSelection();
}

void CaretFloatingPointAPITest$CustomCaret::setMagicCaretPosition($Point* p) {
	$set(this, magicCaretPosition, p);
}

$Point* CaretFloatingPointAPITest$CustomCaret::getMagicCaretPosition() {
	if (this->magicCaretPosition != nullptr) {
		int32_t var$0 = $cast(int32_t, $nc(this->magicCaretPosition)->getX());
		return $new($Point, var$0, $cast(int32_t, $nc(this->magicCaretPosition)->getY()));
	}
	return nullptr;
}

void CaretFloatingPointAPITest$CustomCaret::setBlinkRate(int32_t rate) {
	this->blinkRate = rate;
}

int32_t CaretFloatingPointAPITest$CustomCaret::getBlinkRate() {
	return this->blinkRate;
}

int32_t CaretFloatingPointAPITest$CustomCaret::getDot() {
	return this->dot;
}

int32_t CaretFloatingPointAPITest$CustomCaret::getMark() {
	return this->mark;
}

void CaretFloatingPointAPITest$CustomCaret::setDot(int32_t dot) {
	$init($Position$Bias);
	setDot(dot, $Position$Bias::Forward);
}

void CaretFloatingPointAPITest$CustomCaret::setDot(int32_t dot, $Position$Bias* bias) {
	handleSetDot(dot, bias);
	updateSelection();
}

void CaretFloatingPointAPITest$CustomCaret::moveDot(int32_t dot) {
	$init($Position$Bias);
	moveDot(dot, $Position$Bias::Forward);
}

void CaretFloatingPointAPITest$CustomCaret::moveDot(int32_t dot, $Position$Bias* bias) {
	changeCaretPosition(dot, bias);
	updateSelection();
}

void CaretFloatingPointAPITest$CustomCaret::handleSetDot(int32_t dot, $Position$Bias* dotBias$renamed) {
	$var($Position$Bias, dotBias, dotBias$renamed);
	if (this->component == nullptr) {
		return;
	}
	$var($Document, doc, $nc(this->component)->getDocument());
	if (doc != nullptr) {
		dot = $Math::min(dot, doc->getLength());
	}
	dot = $Math::max(dot, 0);
	if (dot == 0) {
		$init($Position$Bias);
		$assign(dotBias, $Position$Bias::Forward);
	}
	this->mark = dot;
	if (this->dot != dot || this->dotBias != dotBias) {
		changeCaretPosition(dot, dotBias);
		updateSelection();
	}
	$set(this, markBias, this->dotBias);
}

void CaretFloatingPointAPITest$CustomCaret::changeCaretPosition(int32_t dot, $Position$Bias* dotBias) {
	this->dot = dot;
	$set(this, dotBias, dotBias);
	setMagicCaretPosition(nullptr);
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret, this)));
}

void CaretFloatingPointAPITest$CustomCaret::updateSelection() {
	$var($Highlighter, h, $nc(this->component)->getHighlighter());
	if (h != nullptr) {
		int32_t p0 = $Math::min(this->dot, this->mark);
		int32_t p1 = $Math::max(this->dot, this->mark);
		if (p0 == p1 || !this->selectionVisible) {
			if (this->selectionTag != nullptr) {
				h->removeHighlight(this->selectionTag);
				$set(this, selectionTag, nullptr);
			}
		} else {
			try {
				if (this->selectionTag != nullptr) {
					h->changeHighlight(this->selectionTag, p0, p1);
				} else {
					$var($Highlighter$HighlightPainter, p, getSelectionPainter());
					$set(this, selectionTag, h->addHighlight(p0, p1, p));
				}
			} catch ($BadLocationException&) {
				$var($BadLocationException, e, $catch());
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			}
		}
	}
}

void CaretFloatingPointAPITest$CustomCaret::repaintNewCaret() {
	if (this->component != nullptr) {
		$var($TextUI, mapper, $cast($TextUI, $nc(this->component)->getUI()));
		$var($Document, doc, $nc(this->component)->getDocument());
		if ((mapper != nullptr) && (doc != nullptr)) {
			$var($Rectangle2D, newLoc, nullptr);
			try {
				$assign(newLoc, mapper->modelToView2D(this->component, this->dot, this->dotBias));
			} catch ($BadLocationException&) {
				$var($BadLocationException, e, $catch());
				$assign(newLoc, nullptr);
			}
			if (newLoc != nullptr) {
				adjustVisibility($(newLoc->getBounds()));
				if (getMagicCaretPosition() == nullptr) {
					int32_t var$0 = $cast(int32_t, newLoc->getX());
					setMagicCaretPosition($$new($Point, var$0, $cast(int32_t, newLoc->getY())));
				}
			}
			damage($($nc(newLoc)->getBounds()));
		}
	}
}

$Highlighter$HighlightPainter* CaretFloatingPointAPITest$CustomCaret::getSelectionPainter() {
	$init($DefaultHighlighter);
	return $DefaultHighlighter::DefaultPainter;
}

void CaretFloatingPointAPITest$CustomCaret::adjustVisibility($Rectangle* nloc) {
	if (this->component == nullptr) {
		return;
	}
	if ($SwingUtilities::isEventDispatchThread()) {
		$nc(this->component)->scrollRectToVisible(nloc);
	} else {
		$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1, this, nloc)));
	}
}

void CaretFloatingPointAPITest$CustomCaret::damage($Rectangle* r) {
	$synchronized(this) {
		if (r != nullptr && this->component != nullptr) {
			$nc(this->component)->repaint(r);
		}
	}
}

void CaretFloatingPointAPITest$CustomCaret::lambda$adjustVisibility$0($Rectangle* nloc) {
	$nc(this->component)->scrollRectToVisible(nloc);
}

CaretFloatingPointAPITest$CustomCaret::CaretFloatingPointAPITest$CustomCaret() {
}

$Class* CaretFloatingPointAPITest$CustomCaret::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret::classInfo$.name)) {
			return CaretFloatingPointAPITest$CustomCaret$$Lambda$repaintNewCaret::load$(name, initialize);
		}
		if (name->equals(CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1::classInfo$.name)) {
			return CaretFloatingPointAPITest$CustomCaret$$Lambda$lambda$adjustVisibility$0$1::load$(name, initialize);
		}
	}
	$loadClass(CaretFloatingPointAPITest$CustomCaret, name, initialize, &_CaretFloatingPointAPITest$CustomCaret_ClassInfo_, allocate$CaretFloatingPointAPITest$CustomCaret);
	return class$;
}

$Class* CaretFloatingPointAPITest$CustomCaret::class$ = nullptr;