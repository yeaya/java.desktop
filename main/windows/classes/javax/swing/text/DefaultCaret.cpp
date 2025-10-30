#include <javax/swing/text/DefaultCaret.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/ClipboardOwner.h>
#include <java/awt/datatransfer/StringSelection.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/util/EventListener.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultCaret$1.h>
#include <javax/swing/text/DefaultCaret$DefaultFilterBypass.h>
#include <javax/swing/text/DefaultCaret$Handler.h>
#include <javax/swing/text/DefaultCaret$SafeScroller.h>
#include <javax/swing/text/DefaultEditorKit$SelectLineAction.h>
#include <javax/swing/text/DefaultEditorKit$SelectWordAction.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
#include <javax/swing/text/NavigationFilter$FilterBypass.h>
#include <javax/swing/text/NavigationFilter.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/StateInvariantError.h>
#include <javax/swing/text/TextAction.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef ACTIVATION
#undef ALWAYS_UPDATE
#undef H
#undef NEVER_UPDATE
#undef SHIFT_MASK
#undef TRUE
#undef UPDATE_WHEN_ON_EDT
#undef W
#undef X
#undef Y

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $HeadlessException = ::java::awt::HeadlessException;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $ClipboardOwner = ::java::awt::datatransfer::ClipboardOwner;
using $StringSelection = ::java::awt::datatransfer::StringSelection;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $FocusListener = ::java::awt::event::FocusListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Runnable = ::java::lang::Runnable;
using $SecurityException = ::java::lang::SecurityException;
using $EventListener = ::java::util::EventListener;
using $EventObject = ::java::util::EventObject;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JRootPane = ::javax::swing::JRootPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret$1 = ::javax::swing::text::DefaultCaret$1;
using $DefaultCaret$DefaultFilterBypass = ::javax::swing::text::DefaultCaret$DefaultFilterBypass;
using $DefaultCaret$Handler = ::javax::swing::text::DefaultCaret$Handler;
using $DefaultCaret$SafeScroller = ::javax::swing::text::DefaultCaret$SafeScroller;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $DefaultEditorKit$SelectLineAction = ::javax::swing::text::DefaultEditorKit$SelectLineAction;
using $DefaultEditorKit$SelectWordAction = ::javax::swing::text::DefaultEditorKit$SelectWordAction;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $Highlighter = ::javax::swing::text::Highlighter;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LayeredHighlighter$LayerPainter = ::javax::swing::text::LayeredHighlighter$LayerPainter;
using $NavigationFilter = ::javax::swing::text::NavigationFilter;
using $NavigationFilter$FilterBypass = ::javax::swing::text::NavigationFilter$FilterBypass;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $StateInvariantError = ::javax::swing::text::StateInvariantError;
using $TextAction = ::javax::swing::text::TextAction;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultCaret_FieldInfo_[] = {
	{"UPDATE_WHEN_ON_EDT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultCaret, UPDATE_WHEN_ON_EDT)},
	{"NEVER_UPDATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultCaret, NEVER_UPDATE)},
	{"ALWAYS_UPDATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultCaret, ALWAYS_UPDATE)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(DefaultCaret, listenerList)},
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultCaret, changeEvent)},
	{"component", "Ljavax/swing/text/JTextComponent;", nullptr, 0, $field(DefaultCaret, component)},
	{"updatePolicy", "I", nullptr, 0, $field(DefaultCaret, updatePolicy)},
	{"visible", "Z", nullptr, 0, $field(DefaultCaret, visible)},
	{"active", "Z", nullptr, 0, $field(DefaultCaret, active)},
	{"dot", "I", nullptr, 0, $field(DefaultCaret, dot)},
	{"mark", "I", nullptr, 0, $field(DefaultCaret, mark)},
	{"selectionTag", "Ljava/lang/Object;", nullptr, 0, $field(DefaultCaret, selectionTag)},
	{"selectionVisible", "Z", nullptr, 0, $field(DefaultCaret, selectionVisible)},
	{"flasher", "Ljavax/swing/Timer;", nullptr, 0, $field(DefaultCaret, flasher)},
	{"magicCaretPosition", "Ljava/awt/Point;", nullptr, 0, $field(DefaultCaret, magicCaretPosition)},
	{"dotBias", "Ljavax/swing/text/Position$Bias;", nullptr, $TRANSIENT, $field(DefaultCaret, dotBias)},
	{"markBias", "Ljavax/swing/text/Position$Bias;", nullptr, $TRANSIENT, $field(DefaultCaret, markBias)},
	{"dotLTR", "Z", nullptr, 0, $field(DefaultCaret, dotLTR)},
	{"markLTR", "Z", nullptr, 0, $field(DefaultCaret, markLTR)},
	{"handler", "Ljavax/swing/text/DefaultCaret$Handler;", nullptr, $TRANSIENT, $field(DefaultCaret, handler)},
	{"flagXPoints", "[I", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultCaret, flagXPoints)},
	{"flagYPoints", "[I", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultCaret, flagYPoints)},
	{"filterBypass", "Ljavax/swing/text/NavigationFilter$FilterBypass;", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultCaret, filterBypass)},
	{"selectWord", "Ljavax/swing/Action;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticField(DefaultCaret, selectWord$)},
	{"selectLine", "Ljavax/swing/Action;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticField(DefaultCaret, selectLine)},
	{"ownsSelection", "Z", nullptr, $PRIVATE, $field(DefaultCaret, ownsSelection)},
	{"forceCaretPositionChange", "Z", nullptr, $PRIVATE, $field(DefaultCaret, forceCaretPositionChange)},
	{"shouldHandleRelease", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultCaret, shouldHandleRelease)},
	{"selectedWordEvent", "Ljava/awt/event/MouseEvent;", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultCaret, selectedWordEvent)},
	{"caretWidth", "I", nullptr, $PRIVATE, $field(DefaultCaret, caretWidth)},
	{"aspectRatio", "F", nullptr, $PRIVATE, $field(DefaultCaret, aspectRatio)},
	{}
};

$MethodInfo _DefaultCaret_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultCaret::*)()>(&DefaultCaret::init$))},
	{"_contains", "(IIII)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultCaret::*)(int32_t,int32_t,int32_t,int32_t)>(&DefaultCaret::_contains))},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"adjustCaret", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultCaret::*)($MouseEvent*)>(&DefaultCaret::adjustCaret))},
	{"adjustCaretAndFocus", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"adjustFocus", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultCaret::*)(bool)>(&DefaultCaret::adjustFocus))},
	{"adjustVisibility", "(Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"changeCaretPosition", "(ILjavax/swing/text/Position$Bias;)V", nullptr, 0},
	{"damage", "(Ljava/awt/Rectangle;)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"deinstall", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC},
	{"ensureValidPosition", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultCaret::*)()>(&DefaultCaret::ensureValidPosition))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getBlinkRate", "()I", nullptr, $PUBLIC},
	{"getCaretWidth", "(I)I", nullptr, 0},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC},
	{"getClipboardOwner", "()Ljava/awt/datatransfer/ClipboardOwner;", nullptr, $PRIVATE, $method(static_cast<$ClipboardOwner*(DefaultCaret::*)()>(&DefaultCaret::getClipboardOwner))},
	{"getComponent", "()Ljavax/swing/text/JTextComponent;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$JTextComponent*(DefaultCaret::*)()>(&DefaultCaret::getComponent))},
	{"getDot", "()I", nullptr, $PUBLIC},
	{"getDotBias", "()Ljavax/swing/text/Position$Bias;", nullptr, $PUBLIC},
	{"getFilterBypass", "()Ljavax/swing/text/NavigationFilter$FilterBypass;", nullptr, $PRIVATE, $method(static_cast<$NavigationFilter$FilterBypass*(DefaultCaret::*)()>(&DefaultCaret::getFilterBypass))},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getMagicCaretPosition", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getMark", "()I", nullptr, $PUBLIC},
	{"getMarkBias", "()Ljavax/swing/text/Position$Bias;", nullptr, $PUBLIC},
	{"getSelectionPainter", "()Ljavax/swing/text/Highlighter$HighlightPainter;", nullptr, $PROTECTED},
	{"getSystemSelection", "()Ljava/awt/datatransfer/Clipboard;", nullptr, $PRIVATE, $method(static_cast<$Clipboard*(DefaultCaret::*)()>(&DefaultCaret::getSystemSelection))},
	{"getUpdatePolicy", "()I", nullptr, $PUBLIC},
	{"guessBiasForOffset", "(ILjavax/swing/text/Position$Bias;Z)Ljavax/swing/text/Position$Bias;", nullptr, 0},
	{"handleMoveDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, 0},
	{"handleSetDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, 0},
	{"install", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC},
	{"isActive", "()Z", nullptr, $PUBLIC},
	{"isDotLeftToRight", "()Z", nullptr, 0},
	{"isMarkLeftToRight", "()Z", nullptr, 0},
	{"isPositionLTR", "(ILjavax/swing/text/Position$Bias;)Z", nullptr, 0},
	{"isSelectionVisible", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"moveCaret", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{"moveDot", "(I)V", nullptr, $PUBLIC},
	{"moveDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"positionCaret", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultCaret::*)($ObjectInputStream*)>(&DefaultCaret::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PROTECTED | $FINAL | $SYNCHRONIZED, $method(static_cast<void(DefaultCaret::*)()>(&DefaultCaret::repaint))},
	{"repaintNewCaret", "()V", nullptr, 0},
	{"selectWord", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultCaret::*)($MouseEvent*)>(&DefaultCaret::selectWord))},
	{"setBlinkRate", "(I)V", nullptr, $PUBLIC},
	{"setDot", "(I)V", nullptr, $PUBLIC},
	{"setDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC},
	{"setMagicCaretPosition", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"setSelectionVisible", "(Z)V", nullptr, $PUBLIC},
	{"setUpdatePolicy", "(I)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateSystemSelection", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultCaret::*)()>(&DefaultCaret::updateSystemSelection))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultCaret::*)($ObjectOutputStream*)>(&DefaultCaret::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _DefaultCaret_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultCaret$DefaultFilterBypass", "javax.swing.text.DefaultCaret", "DefaultFilterBypass", $PRIVATE},
	{"javax.swing.text.DefaultCaret$Handler", "javax.swing.text.DefaultCaret", "Handler", 0},
	{"javax.swing.text.DefaultCaret$SafeScroller", "javax.swing.text.DefaultCaret", "SafeScroller", 0},
	{"javax.swing.text.DefaultCaret$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultCaret_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultCaret",
	"java.awt.Rectangle",
	"javax.swing.text.Caret,java.awt.event.FocusListener,java.awt.event.MouseListener,java.awt.event.MouseMotionListener",
	_DefaultCaret_FieldInfo_,
	_DefaultCaret_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultCaret_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultCaret$DefaultFilterBypass,javax.swing.text.DefaultCaret$Handler,javax.swing.text.DefaultCaret$SafeScroller,javax.swing.text.DefaultCaret$1"
};

$Object* allocate$DefaultCaret($Class* clazz) {
	return $of($alloc(DefaultCaret));
}

int32_t DefaultCaret::hashCode() {
	 return this->$Rectangle::hashCode();
}

$Object* DefaultCaret::clone() {
	 return this->$Rectangle::clone();
}

void DefaultCaret::finalize() {
	this->$Rectangle::finalize();
}

$Action* DefaultCaret::selectWord$ = nullptr;
$Action* DefaultCaret::selectLine = nullptr;

void DefaultCaret::init$() {
	$Rectangle::init$();
	$set(this, listenerList, $new($EventListenerList));
	$set(this, changeEvent, nullptr);
	this->updatePolicy = DefaultCaret::UPDATE_WHEN_ON_EDT;
	$set(this, handler, $new($DefaultCaret$Handler, this));
	$set(this, flagXPoints, $new($ints, 3));
	$set(this, flagYPoints, $new($ints, 3));
	$set(this, selectedWordEvent, nullptr);
	this->caretWidth = -1;
	this->aspectRatio = (float)-1;
}

void DefaultCaret::setUpdatePolicy(int32_t policy) {
	this->updatePolicy = policy;
}

int32_t DefaultCaret::getUpdatePolicy() {
	return this->updatePolicy;
}

$JTextComponent* DefaultCaret::getComponent() {
	return this->component;
}

void DefaultCaret::repaint() {
	$synchronized(this) {
		if (this->component != nullptr) {
			$nc(this->component)->repaint(this->x, this->y, this->width, this->height);
		}
	}
}

void DefaultCaret::damage($Rectangle* r) {
	$synchronized(this) {
		if (r != nullptr) {
			int32_t damageWidth = getCaretWidth(r->height);
			this->x = r->x - 4 - (damageWidth >> 1);
			this->y = r->y;
			this->width = 9 + damageWidth;
			this->height = r->height;
			repaint();
		}
	}
}

void DefaultCaret::adjustVisibility($Rectangle* nloc) {
	if (this->component == nullptr) {
		return;
	}
	if ($SwingUtilities::isEventDispatchThread()) {
		$nc(this->component)->scrollRectToVisible(nloc);
	} else {
		$SwingUtilities::invokeLater($$new($DefaultCaret$SafeScroller, this, nloc));
	}
}

$Highlighter$HighlightPainter* DefaultCaret::getSelectionPainter() {
	$init($DefaultHighlighter);
	return $DefaultHighlighter::DefaultPainter;
}

void DefaultCaret::positionCaret($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(e)->getX();
	$var($Point, pt, $new($Point, var$0, e->getY()));
	$var($Position$BiasArray, biasRet, $new($Position$BiasArray, 1));
	int32_t pos = $nc($($cast($TextUI, $nc(this->component)->getUI())))->viewToModel(this->component, pt, biasRet);
	if (biasRet->get(0) == nullptr) {
		$init($Position$Bias);
		biasRet->set(0, $Position$Bias::Forward);
	}
	if (pos >= 0) {
		setDot(pos, biasRet->get(0));
	}
}

void DefaultCaret::moveCaret($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(e)->getX();
	$var($Point, pt, $new($Point, var$0, e->getY()));
	$var($Position$BiasArray, biasRet, $new($Position$BiasArray, 1));
	int32_t pos = $nc($($cast($TextUI, $nc(this->component)->getUI())))->viewToModel(this->component, pt, biasRet);
	if (biasRet->get(0) == nullptr) {
		$init($Position$Bias);
		biasRet->set(0, $Position$Bias::Forward);
	}
	if (pos >= 0) {
		moveDot(pos, biasRet->get(0));
	}
}

void DefaultCaret::focusGained($FocusEvent* e) {
	if ($nc(this->component)->isEnabled()) {
		if ($nc(this->component)->isEditable()) {
			setVisible(true);
		}
		setSelectionVisible(true);
		updateSystemSelection();
	}
}

void DefaultCaret::focusLost($FocusEvent* e) {
	setVisible(false);
	$init($FocusEvent$Cause);
	bool var$1 = $nc(e)->getCause() == $FocusEvent$Cause::ACTIVATION;
	bool var$0 = (var$1 || $instanceOf($JRootPane, $($nc(e)->getOppositeComponent())));
	setSelectionVisible(var$0 && (this->ownsSelection || $nc(e)->isTemporary()));
}

void DefaultCaret::selectWord($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = this->selectedWordEvent != nullptr;
	if (var$1) {
		int32_t var$2 = $nc(this->selectedWordEvent)->getX();
		var$1 = var$2 == $nc(e)->getX();
	}
	bool var$0 = var$1;
	if (var$0) {
		int32_t var$3 = $nc(this->selectedWordEvent)->getY();
		var$0 = var$3 == e->getY();
	}
	if (var$0) {
		return;
	}
	$var($Action, a, nullptr);
	$var($ActionMap, map, $nc($(getComponent()))->getActionMap());
	if (map != nullptr) {
		$init($DefaultEditorKit);
		$assign(a, map->get($DefaultEditorKit::selectWordAction));
	}
	if (a == nullptr) {
		if (DefaultCaret::selectWord$ == nullptr) {
			$assignStatic(DefaultCaret::selectWord$, $new($DefaultEditorKit$SelectWordAction));
		}
		$assign(a, DefaultCaret::selectWord$);
	}
	$var($Object, var$4, $of(getComponent()));
	int64_t var$5 = $nc(e)->getWhen();
	$nc(a)->actionPerformed($$new($ActionEvent, var$4, $ActionEvent::ACTION_PERFORMED, nullptr, var$5, e->getModifiers()));
	$set(this, selectedWordEvent, e);
}

void DefaultCaret::mouseClicked($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (getComponent() == nullptr) {
		return;
	}
	int32_t nclicks = $SwingUtilities2::getAdjustedClickCount($(getComponent()), e);
	if (!$nc(e)->isConsumed()) {
		if ($SwingUtilities::isLeftMouseButton(e)) {
			if (nclicks == 1) {
				$set(this, selectedWordEvent, nullptr);
			} else if (nclicks == 2 && $SwingUtilities2::canEventAccessSystemClipboard(e)) {
				selectWord(e);
				$set(this, selectedWordEvent, nullptr);
			} else if (nclicks == 3 && $SwingUtilities2::canEventAccessSystemClipboard(e)) {
				$var($Action, a, nullptr);
				$var($ActionMap, map, $nc($(getComponent()))->getActionMap());
				if (map != nullptr) {
					$init($DefaultEditorKit);
					$assign(a, map->get($DefaultEditorKit::selectLineAction));
				}
				if (a == nullptr) {
					if (DefaultCaret::selectLine == nullptr) {
						$assignStatic(DefaultCaret::selectLine, $new($DefaultEditorKit$SelectLineAction));
					}
					$assign(a, DefaultCaret::selectLine);
				}
				$var($Object, var$0, $of(getComponent()));
				int64_t var$1 = e->getWhen();
				$nc(a)->actionPerformed($$new($ActionEvent, var$0, $ActionEvent::ACTION_PERFORMED, nullptr, var$1, e->getModifiers()));
			}
		} else if ($SwingUtilities::isMiddleMouseButton(e)) {
			bool var$3 = nclicks == 1 && $nc(this->component)->isEditable();
			bool var$2 = var$3 && $nc(this->component)->isEnabled();
			if (var$2 && $SwingUtilities2::canEventAccessSystemClipboard(e)) {
				$var($JTextComponent, c, $cast($JTextComponent, e->getSource()));
				if (c != nullptr) {
					try {
						$var($Toolkit, tk, c->getToolkit());
						$var($Clipboard, buffer, $nc(tk)->getSystemSelection());
						if (buffer != nullptr) {
							adjustCaret(e);
							$var($TransferHandler, th, c->getTransferHandler());
							if (th != nullptr) {
								$var($Transferable, trans, nullptr);
								try {
									$assign(trans, buffer->getContents(nullptr));
								} catch ($IllegalStateException& ise) {
									$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(c);
								}
								if (trans != nullptr) {
									th->importData(c, trans);
								}
							}
							adjustFocus(true);
						}
					} catch ($HeadlessException& he) {
					}
				}
			}
		}
	}
}

void DefaultCaret::mousePressed($MouseEvent* e) {
	int32_t nclicks = $SwingUtilities2::getAdjustedClickCount($(getComponent()), e);
	if ($SwingUtilities::isLeftMouseButton(e)) {
		if ($nc(e)->isConsumed()) {
			this->shouldHandleRelease = true;
		} else {
			this->shouldHandleRelease = false;
			adjustCaretAndFocus(e);
			if (nclicks == 2 && $SwingUtilities2::canEventAccessSystemClipboard(e)) {
				selectWord(e);
			}
		}
	}
}

void DefaultCaret::adjustCaretAndFocus($MouseEvent* e) {
	adjustCaret(e);
	adjustFocus(false);
}

void DefaultCaret::adjustCaret($MouseEvent* e) {
	bool var$0 = ((int32_t)($nc(e)->getModifiers() & (uint32_t)$ActionEvent::SHIFT_MASK)) != 0;
	if (var$0 && getDot() != -1) {
		moveCaret(e);
	} else if (!e->isPopupTrigger()) {
		positionCaret(e);
	}
}

void DefaultCaret::adjustFocus(bool inWindow) {
	bool var$0 = (this->component != nullptr) && $nc(this->component)->isEnabled();
	if (var$0 && $nc(this->component)->isRequestFocusEnabled()) {
		if (inWindow) {
			$nc(this->component)->requestFocusInWindow();
		} else {
			$nc(this->component)->requestFocus();
		}
	}
}

void DefaultCaret::mouseReleased($MouseEvent* e) {
	bool var$0 = !$nc(e)->isConsumed() && this->shouldHandleRelease;
	if (var$0 && $SwingUtilities::isLeftMouseButton(e)) {
		adjustCaretAndFocus(e);
	}
}

void DefaultCaret::mouseEntered($MouseEvent* e) {
}

void DefaultCaret::mouseExited($MouseEvent* e) {
}

void DefaultCaret::mouseDragged($MouseEvent* e) {
	bool var$0 = (!$nc(e)->isConsumed());
	if (var$0 && $SwingUtilities::isLeftMouseButton(e)) {
		moveCaret(e);
	}
}

void DefaultCaret::mouseMoved($MouseEvent* e) {
}

void DefaultCaret::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (isVisible()) {
		try {
			$var($TextUI, mapper, $cast($TextUI, $nc(this->component)->getUI()));
			$var($Rectangle, r, $nc(mapper)->modelToView(this->component, this->dot, this->dotBias));
			if ((r == nullptr) || (($nc(r)->width == 0) && (r->height == 0))) {
				return;
			}
			if (this->width > 0 && this->height > 0 && !this->_contains($nc(r)->x, r->y, r->width, r->height)) {
				$var($Rectangle, clip, $nc(g)->getClipBounds());
				if (clip != nullptr && !clip->contains(static_cast<$Rectangle*>(this))) {
					repaint();
				}
				damage(r);
			}
			$nc(g)->setColor($($nc(this->component)->getCaretColor()));
			int32_t paintWidth = getCaretWidth($nc(r)->height);
			$nc(r)->x -= paintWidth >> 1;
			g->fillRect(r->x, r->y, paintWidth, r->height);
			$var($Document, doc, $nc(this->component)->getDocument());
			if ($instanceOf($AbstractDocument, doc)) {
				$var($Element, bidi, $nc(($cast($AbstractDocument, doc)))->getBidiRootElement());
				if ((bidi != nullptr) && (bidi->getElementCount() > 1)) {
					$nc(this->flagXPoints)->set(0, r->x + ((this->dotLTR) ? paintWidth : 0));
					$nc(this->flagYPoints)->set(0, r->y);
					$nc(this->flagXPoints)->set(1, $nc(this->flagXPoints)->get(0));
					$nc(this->flagYPoints)->set(1, $nc(this->flagYPoints)->get(0) + 4);
					$nc(this->flagXPoints)->set(2, $nc(this->flagXPoints)->get(0) + ((this->dotLTR) ? 4 : -4));
					$nc(this->flagYPoints)->set(2, $nc(this->flagYPoints)->get(0));
					g->fillPolygon(this->flagXPoints, this->flagYPoints, 3);
				}
			}
		} catch ($BadLocationException& e) {
		}
	}
}

void DefaultCaret::install($JTextComponent* c) {
	$useLocalCurrentObjectStackCache();
	$set(this, component, c);
	$var($Document, doc, $nc(c)->getDocument());
	this->dot = (this->mark = 0);
	this->dotLTR = (this->markLTR = true);
	$init($Position$Bias);
	$set(this, dotBias, ($set(this, markBias, $Position$Bias::Forward)));
	if (doc != nullptr) {
		doc->addDocumentListener(this->handler);
	}
	c->addPropertyChangeListener(this->handler);
	c->addFocusListener(this);
	c->addMouseListener(this);
	c->addMouseMotionListener(this);
	if ($nc(this->component)->hasFocus()) {
		focusGained(nullptr);
	}
	$var($Number, ratio, $cast($Number, c->getClientProperty("caretAspectRatio"_s)));
	if (ratio != nullptr) {
		this->aspectRatio = ratio->floatValue();
	} else {
		this->aspectRatio = (float)-1;
	}
	$var($Integer, width, $cast($Integer, c->getClientProperty("caretWidth"_s)));
	if (width != nullptr) {
		this->caretWidth = width->intValue();
	} else {
		this->caretWidth = -1;
	}
}

void DefaultCaret::deinstall($JTextComponent* c) {
	$nc(c)->removeMouseListener(this);
	c->removeMouseMotionListener(this);
	c->removeFocusListener(this);
	c->removePropertyChangeListener(this->handler);
	$var($Document, doc, c->getDocument());
	if (doc != nullptr) {
		doc->removeDocumentListener(this->handler);
	}
	$synchronized(this) {
		$set(this, component, nullptr);
	}
	if (this->flasher != nullptr) {
		$nc(this->flasher)->stop();
	}
}

void DefaultCaret::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void DefaultCaret::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* DefaultCaret::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void DefaultCaret::fireStateChanged() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ChangeListener);
		if ($equals(listeners->get(i), $ChangeListener::class$)) {
			if (this->changeEvent == nullptr) {
				$set(this, changeEvent, $new($ChangeEvent, this));
			}
			$nc(($cast($ChangeListener, listeners->get(i + 1))))->stateChanged(this->changeEvent);
		}
	}
}

$EventListenerArray* DefaultCaret::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

void DefaultCaret::setSelectionVisible(bool vis) {
	$useLocalCurrentObjectStackCache();
	if (vis != this->selectionVisible) {
		this->selectionVisible = vis;
		if (this->selectionVisible) {
			$var($Highlighter, h, $nc(this->component)->getHighlighter());
			if ((this->dot != this->mark) && (h != nullptr) && (this->selectionTag == nullptr)) {
				int32_t p0 = $Math::min(this->dot, this->mark);
				int32_t p1 = $Math::max(this->dot, this->mark);
				$var($Highlighter$HighlightPainter, p, getSelectionPainter());
				try {
					$set(this, selectionTag, h->addHighlight(p0, p1, p));
				} catch ($BadLocationException& bl) {
					$set(this, selectionTag, nullptr);
				}
			}
		} else if (this->selectionTag != nullptr) {
			$var($Highlighter, h, $nc(this->component)->getHighlighter());
			$nc(h)->removeHighlight(this->selectionTag);
			$set(this, selectionTag, nullptr);
		}
	}
}

bool DefaultCaret::isSelectionVisible() {
	return this->selectionVisible;
}

bool DefaultCaret::isActive() {
	return this->active;
}

bool DefaultCaret::isVisible() {
	return this->visible;
}

void DefaultCaret::setVisible(bool e) {
	$useLocalCurrentObjectStackCache();
	this->active = e;
	if (this->component != nullptr) {
		$var($TextUI, mapper, $cast($TextUI, $nc(this->component)->getUI()));
		if (this->visible != e) {
			this->visible = e;
			try {
				$var($Rectangle, loc, $nc(mapper)->modelToView(this->component, this->dot, this->dotBias));
				damage(loc);
			} catch ($BadLocationException& badloc) {
			}
		}
	}
	if (this->flasher != nullptr) {
		if (this->visible) {
			$nc(this->flasher)->start();
		} else {
			$nc(this->flasher)->stop();
		}
	}
}

void DefaultCaret::setBlinkRate(int32_t rate) {
	if (rate != 0) {
		if (this->flasher == nullptr) {
			$set(this, flasher, $new($Timer, rate, this->handler));
		}
		$nc(this->flasher)->setDelay(rate);
	} else if (this->flasher != nullptr) {
		$nc(this->flasher)->stop();
		$nc(this->flasher)->removeActionListener(this->handler);
		$set(this, flasher, nullptr);
	}
}

int32_t DefaultCaret::getBlinkRate() {
	return (this->flasher == nullptr) ? 0 : $nc(this->flasher)->getDelay();
}

int32_t DefaultCaret::getDot() {
	return this->dot;
}

int32_t DefaultCaret::getMark() {
	return this->mark;
}

void DefaultCaret::setDot(int32_t dot) {
	$init($Position$Bias);
	setDot(dot, $Position$Bias::Forward);
}

void DefaultCaret::moveDot(int32_t dot) {
	$init($Position$Bias);
	moveDot(dot, $Position$Bias::Forward);
}

void DefaultCaret::moveDot(int32_t dot, $Position$Bias* dotBias) {
	$useLocalCurrentObjectStackCache();
	if (dotBias == nullptr) {
		$throwNew($IllegalArgumentException, "null bias"_s);
	}
	if (!$nc(this->component)->isEnabled()) {
		setDot(dot, dotBias);
		return;
	}
	if (dot != this->dot) {
		$var($NavigationFilter, filter, $nc(this->component)->getNavigationFilter());
		if (filter != nullptr) {
			filter->moveDot($(getFilterBypass()), dot, dotBias);
		} else {
			handleMoveDot(dot, dotBias);
		}
	}
}

void DefaultCaret::handleMoveDot(int32_t dot, $Position$Bias* dotBias) {
	$useLocalCurrentObjectStackCache();
	changeCaretPosition(dot, dotBias);
	if (this->selectionVisible) {
		$var($Highlighter, h, $nc(this->component)->getHighlighter());
		if (h != nullptr) {
			int32_t p0 = $Math::min(dot, this->mark);
			int32_t p1 = $Math::max(dot, this->mark);
			if (p0 == p1) {
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
				} catch ($BadLocationException& e) {
					$throwNew($StateInvariantError, "Bad caret position"_s);
				}
			}
		}
	}
}

void DefaultCaret::setDot(int32_t dot, $Position$Bias* dotBias) {
	$useLocalCurrentObjectStackCache();
	if (dotBias == nullptr) {
		$throwNew($IllegalArgumentException, "null bias"_s);
	}
	$var($NavigationFilter, filter, $nc(this->component)->getNavigationFilter());
	if (filter != nullptr) {
		filter->setDot($(getFilterBypass()), dot, dotBias);
	} else {
		handleSetDot(dot, dotBias);
	}
}

void DefaultCaret::handleSetDot(int32_t dot, $Position$Bias* dotBias$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Position$Bias, dotBias, dotBias$renamed);
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
	if (this->dot != dot || this->dotBias != dotBias || this->selectionTag != nullptr || this->forceCaretPositionChange) {
		changeCaretPosition(dot, dotBias);
	}
	$set(this, markBias, this->dotBias);
	this->markLTR = this->dotLTR;
	$var($Highlighter, h, $nc(this->component)->getHighlighter());
	if ((h != nullptr) && (this->selectionTag != nullptr)) {
		h->removeHighlight(this->selectionTag);
		$set(this, selectionTag, nullptr);
	}
}

$Position$Bias* DefaultCaret::getDotBias() {
	return this->dotBias;
}

$Position$Bias* DefaultCaret::getMarkBias() {
	return this->markBias;
}

bool DefaultCaret::isDotLeftToRight() {
	return this->dotLTR;
}

bool DefaultCaret::isMarkLeftToRight() {
	return this->markLTR;
}

bool DefaultCaret::isPositionLTR(int32_t position, $Position$Bias* bias) {
	$var($Document, doc, $nc(this->component)->getDocument());
	$init($Position$Bias);
	if (bias == $Position$Bias::Backward && --position < 0) {
		position = 0;
	}
	return $AbstractDocument::isLeftToRight(doc, position, position);
}

$Position$Bias* DefaultCaret::guessBiasForOffset(int32_t offset, $Position$Bias* lastBias$renamed, bool lastLTR) {
	$useLocalCurrentObjectStackCache();
	$var($Position$Bias, lastBias, lastBias$renamed);
	if (lastLTR != isPositionLTR(offset, lastBias)) {
		$init($Position$Bias);
		$assign(lastBias, $Position$Bias::Backward);
	} else {
		$init($Position$Bias);
		if (lastBias != $Position$Bias::Backward && lastLTR != isPositionLTR(offset, $Position$Bias::Backward)) {
			$assign(lastBias, $Position$Bias::Backward);
		}
	}
	$init($Position$Bias);
	if (lastBias == $Position$Bias::Backward && offset > 0) {
		try {
			$var($Segment, s, $new($Segment));
			$nc($($nc(this->component)->getDocument()))->getText(offset - 1, 1, s);
			if (s->count > 0 && $nc(s->array)->get(s->offset) == u'\n') {
				$assign(lastBias, $Position$Bias::Forward);
			}
		} catch ($BadLocationException& ble) {
		}
	}
	return lastBias;
}

void DefaultCaret::changeCaretPosition(int32_t dot, $Position$Bias* dotBias) {
	repaint();
	if (this->flasher != nullptr && $nc(this->flasher)->isRunning()) {
		this->visible = true;
		$nc(this->flasher)->restart();
	}
	this->dot = dot;
	$set(this, dotBias, dotBias);
	this->dotLTR = isPositionLTR(dot, dotBias);
	fireStateChanged();
	updateSystemSelection();
	setMagicCaretPosition(nullptr);
	$var($Runnable, callRepaintNewCaret, $new($DefaultCaret$1, this));
	$SwingUtilities::invokeLater(callRepaintNewCaret);
}

void DefaultCaret::repaintNewCaret() {
	$useLocalCurrentObjectStackCache();
	if (this->component != nullptr) {
		$var($TextUI, mapper, $cast($TextUI, $nc(this->component)->getUI()));
		$var($Document, doc, $nc(this->component)->getDocument());
		if ((mapper != nullptr) && (doc != nullptr)) {
			$var($Rectangle, newLoc, nullptr);
			try {
				$assign(newLoc, mapper->modelToView(this->component, this->dot, this->dotBias));
			} catch ($BadLocationException& e) {
				$assign(newLoc, nullptr);
			}
			if (newLoc != nullptr) {
				adjustVisibility(newLoc);
				if (getMagicCaretPosition() == nullptr) {
					setMagicCaretPosition($$new($Point, newLoc->x, newLoc->y));
				}
			}
			damage(newLoc);
		}
	}
}

void DefaultCaret::updateSystemSelection() {
	$useLocalCurrentObjectStackCache();
	if (!$SwingUtilities2::canCurrentEventAccessSystemClipboard()) {
		return;
	}
	if (this->dot != this->mark && this->component != nullptr && $nc(this->component)->hasFocus()) {
		$var($Clipboard, clip, getSystemSelection());
		if (clip != nullptr) {
			$var($String, selectedText, nullptr);
			$init($Boolean);
			if ($instanceOf($JPasswordField, this->component) && !$equals($nc(this->component)->getClientProperty("JPasswordField.cutCopyAllowed"_s), $Boolean::TRUE)) {
				$var($StringBuilder, txt, nullptr);
				char16_t echoChar = $nc(($cast($JPasswordField, this->component)))->getEchoChar();
				int32_t var$0 = getDot();
				int32_t p0 = $Math::min(var$0, getMark());
				int32_t var$1 = getDot();
				int32_t p1 = $Math::max(var$1, getMark());
				for (int32_t i = p0; i < p1; ++i) {
					if (txt == nullptr) {
						$assign(txt, $new($StringBuilder));
					}
					$nc(txt)->append(echoChar);
				}
				$assign(selectedText, (txt != nullptr) ? $nc(txt)->toString() : ($String*)nullptr);
			} else {
				$assign(selectedText, $nc(this->component)->getSelectedText());
			}
			try {
				$var($Transferable, var$2, static_cast<$Transferable*>($new($StringSelection, selectedText)));
				clip->setContents(var$2, $(getClipboardOwner()));
				this->ownsSelection = true;
			} catch ($IllegalStateException& ise) {
			}
		}
	}
}

$Clipboard* DefaultCaret::getSystemSelection() {
	try {
		return $nc($($nc(this->component)->getToolkit()))->getSystemSelection();
	} catch ($HeadlessException& he) {
	} catch ($SecurityException& se) {
	}
	return nullptr;
}

$ClipboardOwner* DefaultCaret::getClipboardOwner() {
	return this->handler;
}

void DefaultCaret::ensureValidPosition() {
	int32_t length = $nc($($nc(this->component)->getDocument()))->getLength();
	if (this->dot > length || this->mark > length) {
		$init($Position$Bias);
		handleSetDot(length, $Position$Bias::Forward);
	}
}

void DefaultCaret::setMagicCaretPosition($Point* p) {
	$set(this, magicCaretPosition, p);
}

$Point* DefaultCaret::getMagicCaretPosition() {
	return this->magicCaretPosition;
}

bool DefaultCaret::equals(Object$* obj) {
	return ($equals(this, obj));
}

$String* DefaultCaret::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $str({"Dot=("_s, $$str(this->dot), ", "_s, this->dotBias, ")"_s}));
	$plusAssign(s, $$str({" Mark=("_s, $$str(this->mark), ", "_s, this->markBias, ")"_s}));
	return s;
}

$NavigationFilter$FilterBypass* DefaultCaret::getFilterBypass() {
	if (this->filterBypass == nullptr) {
		$set(this, filterBypass, $new($DefaultCaret$DefaultFilterBypass, this));
	}
	return this->filterBypass;
}

bool DefaultCaret::_contains(int32_t X, int32_t Y, int32_t W, int32_t H) {
	int32_t w = this->width;
	int32_t h = this->height;
	if ((((w | h) | W) | H) < 0) {
		return false;
	}
	int32_t x = this->x;
	int32_t y = this->y;
	if (X < x || Y < y) {
		return false;
	}
	if (W > 0) {
		w += x;
		W += X;
		if (W <= X) {
			if (w >= x || W > w) {
				return false;
			}
		} else if (w >= x && W > w) {
			return false;
		}
	} else if ((x + w) < X) {
		return false;
	}
	if (H > 0) {
		h += y;
		H += Y;
		if (H <= Y) {
			if (h >= y || H > h) {
				return false;
			}
		} else if (h >= y && H > h) {
			return false;
		}
	} else if ((y + h) < Y) {
		return false;
	}
	return true;
}

int32_t DefaultCaret::getCaretWidth(int32_t height) {
	if (this->aspectRatio > -1) {
		return $cast(int32_t, (this->aspectRatio * height)) + 1;
	}
	if (this->caretWidth > -1) {
		return this->caretWidth;
	} else {
		$var($Object, property, $UIManager::get("Caret.width"_s));
		if ($instanceOf($Integer, property)) {
			return $nc(($cast($Integer, property)))->intValue();
		} else {
			return 1;
		}
	}
}

void DefaultCaret::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$var($EventListenerList, newListenerList, $cast($EventListenerList, $nc(f)->get("listenerList"_s, ($Object*)nullptr)));
	if (newListenerList == nullptr) {
		$throwNew($InvalidObjectException, "Null listenerList"_s);
	}
	$set(this, listenerList, newListenerList);
	$set(this, component, $cast($JTextComponent, f->get("component"_s, ($Object*)nullptr)));
	this->updatePolicy = f->get("updatePolicy"_s, 0);
	this->visible = f->get("visible"_s, false);
	this->active = f->get("active"_s, false);
	this->dot = f->get("dot"_s, 0);
	this->mark = f->get("mark"_s, 0);
	$set(this, selectionTag, f->get("selectionTag"_s, ($Object*)nullptr));
	this->selectionVisible = f->get("selectionVisible"_s, false);
	$set(this, flasher, $cast($Timer, f->get("flasher"_s, ($Object*)nullptr)));
	$set(this, magicCaretPosition, $cast($Point, f->get("magicCaretPosition"_s, ($Object*)nullptr)));
	this->dotLTR = f->get("dotLTR"_s, false);
	this->markLTR = f->get("markLTR"_s, false);
	this->ownsSelection = f->get("ownsSelection"_s, false);
	this->forceCaretPositionChange = f->get("forceCaretPositionChange"_s, false);
	this->caretWidth = f->get("caretWidth"_s, 0);
	this->aspectRatio = f->get("aspectRatio"_s, 0.0f);
	$set(this, handler, $new($DefaultCaret$Handler, this));
	if (!s->readBoolean()) {
		$init($Position$Bias);
		$set(this, dotBias, $Position$Bias::Forward);
	} else {
		$init($Position$Bias);
		$set(this, dotBias, $Position$Bias::Backward);
	}
	if (!s->readBoolean()) {
		$init($Position$Bias);
		$set(this, markBias, $Position$Bias::Forward);
	} else {
		$init($Position$Bias);
		$set(this, markBias, $Position$Bias::Backward);
	}
}

void DefaultCaret::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$init($Position$Bias);
	s->writeBoolean((this->dotBias == $Position$Bias::Backward));
	s->writeBoolean((this->markBias == $Position$Bias::Backward));
}

void clinit$DefaultCaret($Class* class$) {
	$assignStatic(DefaultCaret::selectWord$, nullptr);
	$assignStatic(DefaultCaret::selectLine, nullptr);
}

DefaultCaret::DefaultCaret() {
}

$Class* DefaultCaret::load$($String* name, bool initialize) {
	$loadClass(DefaultCaret, name, initialize, &_DefaultCaret_ClassInfo_, clinit$DefaultCaret, allocate$DefaultCaret);
	return class$;
}

$Class* DefaultCaret::class$ = nullptr;

		} // text
	} // swing
} // javax