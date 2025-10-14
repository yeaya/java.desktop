#include <javax/swing/plaf/basic/BasicTextUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ComponentInputMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InputMapUIResource.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicTextUI$BasicCaret.h>
#include <javax/swing/plaf/basic/BasicTextUI$BasicCursor.h>
#include <javax/swing/plaf/basic/BasicTextUI$BasicHighlighter.h>
#include <javax/swing/plaf/basic/BasicTextUI$DragListener.h>
#include <javax/swing/plaf/basic/BasicTextUI$FocusAction.h>
#include <javax/swing/plaf/basic/BasicTextUI$RootView.h>
#include <javax/swing/plaf/basic/BasicTextUI$TextActionWrapper.h>
#include <javax/swing/plaf/basic/BasicTextUI$TextTransferHandler.h>
#include <javax/swing/plaf/basic/BasicTextUI$UpdateHandler.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/DefaultEditorKit$InsertBreakAction.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent$KeyBinding.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Keymap.h>
#include <javax/swing/text/LayeredHighlighter.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BACKWARD_TRAVERSAL_KEYS
#undef DEFAULT_CARET_MARGIN
#undef DEFAULT_KEYMAP
#undef FORWARD_TRAVERSAL_KEYS
#undef MAX_VALUE
#undef NAME
#undef SHIFT_MASK
#undef TEXT_CURSOR
#undef TRUE
#undef VK_TAB
#undef WHEN_FOCUSED
#undef WHEN_IN_FOCUSED_WINDOW
#undef X_AXIS
#undef Y_AXIS

using $ActionArray = $Array<::javax::swing::Action>;
using $JTextComponent$KeyBindingArray = $Array<::javax::swing::text::JTextComponent$KeyBinding>;
using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $EventObject = ::java::util::EventObject;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JTextArea = ::javax::swing::JTextArea;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ComponentInputMapUIResource = ::javax::swing::plaf::ComponentInputMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InputMapUIResource = ::javax::swing::plaf::InputMapUIResource;
using $TextUI = ::javax::swing::plaf::TextUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicTextUI$BasicCaret = ::javax::swing::plaf::basic::BasicTextUI$BasicCaret;
using $BasicTextUI$BasicCursor = ::javax::swing::plaf::basic::BasicTextUI$BasicCursor;
using $BasicTextUI$BasicHighlighter = ::javax::swing::plaf::basic::BasicTextUI$BasicHighlighter;
using $BasicTextUI$DragListener = ::javax::swing::plaf::basic::BasicTextUI$DragListener;
using $BasicTextUI$FocusAction = ::javax::swing::plaf::basic::BasicTextUI$FocusAction;
using $BasicTextUI$RootView = ::javax::swing::plaf::basic::BasicTextUI$RootView;
using $BasicTextUI$TextActionWrapper = ::javax::swing::plaf::basic::BasicTextUI$TextActionWrapper;
using $BasicTextUI$TextTransferHandler = ::javax::swing::plaf::basic::BasicTextUI$TextTransferHandler;
using $BasicTextUI$UpdateHandler = ::javax::swing::plaf::basic::BasicTextUI$UpdateHandler;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $DefaultEditorKit$InsertBreakAction = ::javax::swing::text::DefaultEditorKit$InsertBreakAction;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Element = ::javax::swing::text::Element;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$KeyBinding = ::javax::swing::text::JTextComponent$KeyBinding;
using $Keymap = ::javax::swing::text::Keymap;
using $LayeredHighlighter = ::javax::swing::text::LayeredHighlighter;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $TextAction = ::javax::swing::text::TextAction;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $AppContext = ::sun::awt::AppContext;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$NamedAttribute BasicTextUI_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _BasicTextUI_MethodAnnotations_modelToView30[] = {
	{"Ljava/lang/Deprecated;", BasicTextUI_Attribute_var$0},
	{}
};

$NamedAttribute BasicTextUI_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _BasicTextUI_MethodAnnotations_modelToView31[] = {
	{"Ljava/lang/Deprecated;", BasicTextUI_Attribute_var$1},
	{}
};

$NamedAttribute BasicTextUI_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _BasicTextUI_MethodAnnotations_viewToModel48[] = {
	{"Ljava/lang/Deprecated;", BasicTextUI_Attribute_var$2},
	{}
};

$NamedAttribute BasicTextUI_Attribute_var$3[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _BasicTextUI_MethodAnnotations_viewToModel49[] = {
	{"Ljava/lang/Deprecated;", BasicTextUI_Attribute_var$3},
	{}
};

$FieldInfo _BasicTextUI_FieldInfo_[] = {
	{"DEFAULT_CARET_MARGIN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicTextUI, DEFAULT_CARET_MARGIN)},
	{"textCursor", "Ljavax/swing/plaf/basic/BasicTextUI$BasicCursor;", nullptr, $PRIVATE | $STATIC, $staticField(BasicTextUI, textCursor)},
	{"defaultKit", "Ljavax/swing/text/EditorKit;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTextUI, defaultKit)},
	{"editor", "Ljavax/swing/text/JTextComponent;", nullptr, $TRANSIENT, $field(BasicTextUI, editor)},
	{"painted", "Z", nullptr, $TRANSIENT, $field(BasicTextUI, painted)},
	{"rootView", "Ljavax/swing/plaf/basic/BasicTextUI$RootView;", nullptr, $TRANSIENT, $field(BasicTextUI, rootView)},
	{"updateHandler", "Ljavax/swing/plaf/basic/BasicTextUI$UpdateHandler;", nullptr, $TRANSIENT, $field(BasicTextUI, updateHandler)},
	{"defaultTransferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTextUI, defaultTransferHandler)},
	{"dragListener", "Ljavax/swing/plaf/basic/BasicTextUI$DragListener;", nullptr, $PRIVATE | $FINAL, $field(BasicTextUI, dragListener)},
	{"discardBias", "[Ljavax/swing/text/Position$Bias;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTextUI, discardBias)},
	{"dropCaret", "Ljavax/swing/text/DefaultCaret;", nullptr, $PRIVATE, $field(BasicTextUI, dropCaret)},
	{"caretMargin", "I", nullptr, $PRIVATE, $field(BasicTextUI, caretMargin)},
	{}
};

$MethodInfo _BasicTextUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicTextUI::*)()>(&BasicTextUI::init$))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"create", "(Ljavax/swing/text/Element;II)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, 0},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createHighlighter", "()Ljavax/swing/text/Highlighter;", nullptr, $PROTECTED},
	{"createKeymap", "()Ljavax/swing/text/Keymap;", nullptr, $PROTECTED},
	{"damageRange", "(Ljavax/swing/text/JTextComponent;II)V", nullptr, $PUBLIC},
	{"damageRange", "(Ljavax/swing/text/JTextComponent;IILjavax/swing/text/Position$Bias;Ljavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC},
	{"getActionMap", "()Ljavax/swing/ActionMap;", nullptr, 0},
	{"getComponent", "()Ljavax/swing/text/JTextComponent;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$JTextComponent*(BasicTextUI::*)()>(&BasicTextUI::getComponent))},
	{"getDragListener", "()Ljavax/swing/plaf/basic/BasicTextUI$DragListener;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BasicTextUI$DragListener*(*)()>(&BasicTextUI::getDragListener))},
	{"getEditorKit", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/EditorKit;", nullptr, $PUBLIC},
	{"getInputMap", "()Ljavax/swing/InputMap;", nullptr, 0},
	{"getKeymapName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getNextVisualPositionFrom", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"getRootView", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"getToolTipText", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTransferHandler", "()Ljavax/swing/TransferHandler;", nullptr, 0},
	{"getVisibleEditorRect", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installDefaults2", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTextUI::*)()>(&BasicTextUI::installDefaults2))},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"modelChanged", "()V", nullptr, $PROTECTED},
	{"modelToView", "(Ljavax/swing/text/JTextComponent;I)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _BasicTextUI_MethodAnnotations_modelToView30},
	{"modelToView", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _BasicTextUI_MethodAnnotations_modelToView31},
	{"modelToView", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;Z)Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(BasicTextUI::*)($JTextComponent*,int32_t,$Position$Bias*,bool)>(&BasicTextUI::modelToView)), "javax.swing.text.BadLocationException"},
	{"modelToView2D", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $FINAL},
	{"paintBackground", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintSafely", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"setView", "(Ljavax/swing/text/View;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(BasicTextUI::*)($View*)>(&BasicTextUI::setView))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateBackground", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTextUI::*)($JTextComponent*)>(&BasicTextUI::updateBackground))},
	{"updateCursor", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTextUI::*)()>(&BasicTextUI::updateCursor))},
	{"updateFocusAcceleratorBinding", "(Z)V", nullptr, 0},
	{"updateFocusTraversalKeys", "()V", nullptr, 0},
	{"viewToModel", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;)I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _BasicTextUI_MethodAnnotations_viewToModel48},
	{"viewToModel", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _BasicTextUI_MethodAnnotations_viewToModel49},
	{"viewToModel", "(Ljavax/swing/text/JTextComponent;FF[Ljavax/swing/text/Position$Bias;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicTextUI::*)($JTextComponent*,float,float,$Position$BiasArray*)>(&BasicTextUI::viewToModel))},
	{"viewToModel2D", "(Ljavax/swing/text/JTextComponent;Ljava/awt/geom/Point2D;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTextUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextUI$TextTransferHandler", "javax.swing.plaf.basic.BasicTextUI", "TextTransferHandler", $STATIC},
	{"javax.swing.plaf.basic.BasicTextUI$DragListener", "javax.swing.plaf.basic.BasicTextUI", "DragListener", $STATIC},
	{"javax.swing.plaf.basic.BasicTextUI$FocusAction", "javax.swing.plaf.basic.BasicTextUI", "FocusAction", 0},
	{"javax.swing.plaf.basic.BasicTextUI$TextActionWrapper", "javax.swing.plaf.basic.BasicTextUI", "TextActionWrapper", 0},
	{"javax.swing.plaf.basic.BasicTextUI$UpdateHandler", "javax.swing.plaf.basic.BasicTextUI", "UpdateHandler", 0},
	{"javax.swing.plaf.basic.BasicTextUI$RootView", "javax.swing.plaf.basic.BasicTextUI", "RootView", 0},
	{"javax.swing.plaf.basic.BasicTextUI$BasicCursor", "javax.swing.plaf.basic.BasicTextUI", "BasicCursor", $STATIC},
	{"javax.swing.plaf.basic.BasicTextUI$BasicHighlighter", "javax.swing.plaf.basic.BasicTextUI", "BasicHighlighter", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicTextUI$BasicCaret", "javax.swing.plaf.basic.BasicTextUI", "BasicCaret", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicTextUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.basic.BasicTextUI",
	"javax.swing.plaf.TextUI",
	"javax.swing.text.ViewFactory",
	_BasicTextUI_FieldInfo_,
	_BasicTextUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextUI$TextTransferHandler,javax.swing.plaf.basic.BasicTextUI$TextTransferHandler$TextTransferable,javax.swing.plaf.basic.BasicTextUI$DragListener,javax.swing.plaf.basic.BasicTextUI$FocusAction,javax.swing.plaf.basic.BasicTextUI$TextActionWrapper,javax.swing.plaf.basic.BasicTextUI$UpdateHandler,javax.swing.plaf.basic.BasicTextUI$RootView,javax.swing.plaf.basic.BasicTextUI$BasicCursor,javax.swing.plaf.basic.BasicTextUI$BasicHighlighter,javax.swing.plaf.basic.BasicTextUI$BasicCaret"
};

$Object* allocate$BasicTextUI($Class* clazz) {
	return $of($alloc(BasicTextUI));
}

int32_t BasicTextUI::hashCode() {
	 return this->$TextUI::hashCode();
}

bool BasicTextUI::equals(Object$* arg0) {
	 return this->$TextUI::equals(arg0);
}

$Object* BasicTextUI::clone() {
	 return this->$TextUI::clone();
}

$String* BasicTextUI::toString() {
	 return this->$TextUI::toString();
}

void BasicTextUI::finalize() {
	this->$TextUI::finalize();
}

$BasicTextUI$BasicCursor* BasicTextUI::textCursor = nullptr;
$EditorKit* BasicTextUI::defaultKit = nullptr;
$TransferHandler* BasicTextUI::defaultTransferHandler = nullptr;
$Position$BiasArray* BasicTextUI::discardBias = nullptr;

void BasicTextUI::init$() {
	$TextUI::init$();
	$set(this, rootView, $new($BasicTextUI$RootView, this));
	$set(this, updateHandler, $new($BasicTextUI$UpdateHandler, this));
	$set(this, dragListener, getDragListener());
	this->painted = false;
}

$Caret* BasicTextUI::createCaret() {
	return $new($BasicTextUI$BasicCaret);
}

$Highlighter* BasicTextUI::createHighlighter() {
	return $new($BasicTextUI$BasicHighlighter);
}

$String* BasicTextUI::getKeymapName() {
	$var($String, nm, $of(this)->getClass()->getName());
	int32_t index = $nc(nm)->lastIndexOf((int32_t)u'.');
	if (index >= 0) {
		$assign(nm, nm->substring(index + 1, nm->length()));
	}
	return nm;
}

$Keymap* BasicTextUI::createKeymap() {
	$var($String, nm, getKeymapName());
	$var($Keymap, map, $JTextComponent::getKeymap(nm));
	if (map == nullptr) {
		$var($Keymap, parent, $JTextComponent::getKeymap($JTextComponent::DEFAULT_KEYMAP));
		$assign(map, $JTextComponent::addKeymap(nm, parent));
		$var($String, prefix, getPropertyPrefix());
		$var($Object, o, $DefaultLookup::get(this->editor, this, $$str({prefix, ".keyBindings"_s})));
		if ((o != nullptr) && ($instanceOf($JTextComponent$KeyBindingArray, o))) {
			$var($JTextComponent$KeyBindingArray, bindings, $cast($JTextComponent$KeyBindingArray, o));
			$JTextComponent::loadKeymap(map, bindings, $($nc($(getComponent()))->getActions()));
		}
	}
	return map;
}

void BasicTextUI::propertyChange($PropertyChangeEvent* evt) {
	bool var$0 = $nc($($nc(evt)->getPropertyName()))->equals("editable"_s);
	if (var$0 || $nc($($nc(evt)->getPropertyName()))->equals("enabled"_s)) {
		updateBackground($cast($JTextComponent, $(evt->getSource())));
	} else if ($nc($(evt->getPropertyName()))->equals("caretWidth"_s)) {
		$var($Object, value, evt->getNewValue());
		if ($instanceOf($Number, value)) {
			int32_t width = $nc(($cast($Number, value)))->intValue();
			if (width >= 0) {
				this->caretMargin = width;
			}
		}
	}
}

void BasicTextUI::updateBackground($JTextComponent* c) {
	if ($instanceOf($SynthUI, this) || ($instanceOf($JTextArea, c))) {
		return;
	}
	$var($Color, background, $nc(c)->getBackground());
	if ($instanceOf($UIResource, background)) {
		$var($String, prefix, getPropertyPrefix());
		$var($Color, disabledBG, $DefaultLookup::getColor(c, this, $$str({prefix, ".disabledBackground"_s}), nullptr));
		$var($Color, inactiveBG, $DefaultLookup::getColor(c, this, $$str({prefix, ".inactiveBackground"_s}), nullptr));
		$var($Color, bg, $DefaultLookup::getColor(c, this, $$str({prefix, ".background"_s}), nullptr));
		if (($instanceOf($JTextArea, c) || $instanceOf($JEditorPane, c)) && background != disabledBG && background != inactiveBG && background != bg) {
			return;
		}
		$var($Color, newColor, nullptr);
		if (!c->isEnabled()) {
			$assign(newColor, disabledBG);
		}
		if (newColor == nullptr && !c->isEditable()) {
			$assign(newColor, inactiveBG);
		}
		if (newColor == nullptr) {
			$assign(newColor, bg);
		}
		if (newColor != nullptr && newColor != background) {
			c->setBackground(newColor);
		}
	}
}

void BasicTextUI::installDefaults() {
	$var($String, prefix, getPropertyPrefix());
	$var($Font, f, $nc(this->editor)->getFont());
	if ((f == nullptr) || ($instanceOf($UIResource, f))) {
		$nc(this->editor)->setFont($($UIManager::getFont($$str({prefix, ".font"_s}))));
	}
	$var($Color, bg, $nc(this->editor)->getBackground());
	if ((bg == nullptr) || ($instanceOf($UIResource, bg))) {
		$nc(this->editor)->setBackground($($UIManager::getColor($$str({prefix, ".background"_s}))));
	}
	$var($Color, fg, $nc(this->editor)->getForeground());
	if ((fg == nullptr) || ($instanceOf($UIResource, fg))) {
		$nc(this->editor)->setForeground($($UIManager::getColor($$str({prefix, ".foreground"_s}))));
	}
	$var($Color, color, $nc(this->editor)->getCaretColor());
	if ((color == nullptr) || ($instanceOf($UIResource, color))) {
		$nc(this->editor)->setCaretColor($($UIManager::getColor($$str({prefix, ".caretForeground"_s}))));
	}
	$var($Color, s, $nc(this->editor)->getSelectionColor());
	if ((s == nullptr) || ($instanceOf($UIResource, s))) {
		$nc(this->editor)->setSelectionColor($($UIManager::getColor($$str({prefix, ".selectionBackground"_s}))));
	}
	$var($Color, sfg, $nc(this->editor)->getSelectedTextColor());
	if ((sfg == nullptr) || ($instanceOf($UIResource, sfg))) {
		$nc(this->editor)->setSelectedTextColor($($UIManager::getColor($$str({prefix, ".selectionForeground"_s}))));
	}
	$var($Color, dfg, $nc(this->editor)->getDisabledTextColor());
	if ((dfg == nullptr) || ($instanceOf($UIResource, dfg))) {
		$nc(this->editor)->setDisabledTextColor($($UIManager::getColor($$str({prefix, ".inactiveForeground"_s}))));
	}
	$var($Border, b, $nc(this->editor)->getBorder());
	if ((b == nullptr) || ($instanceOf($UIResource, b))) {
		$nc(this->editor)->setBorder($($UIManager::getBorder($$str({prefix, ".border"_s}))));
	}
	$var($Insets, margin, $nc(this->editor)->getMargin());
	if (margin == nullptr || $instanceOf($UIResource, margin)) {
		$nc(this->editor)->setMargin($($UIManager::getInsets($$str({prefix, ".margin"_s}))));
	}
	updateCursor();
}

void BasicTextUI::installDefaults2() {
	$nc(this->editor)->addMouseListener(static_cast<$MouseListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(this->dragListener))));
	$nc(this->editor)->addMouseMotionListener(static_cast<$MouseMotionListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(this->dragListener))));
	$var($String, prefix, getPropertyPrefix());
	$var($Caret, caret, $nc(this->editor)->getCaret());
	if (caret == nullptr || $instanceOf($UIResource, caret)) {
		$assign(caret, createCaret());
		$nc(this->editor)->setCaret(caret);
		int32_t rate = $DefaultLookup::getInt($(getComponent()), this, $$str({prefix, ".caretBlinkRate"_s}), 500);
		$nc(caret)->setBlinkRate(rate);
	}
	$var($Highlighter, highlighter, $nc(this->editor)->getHighlighter());
	if (highlighter == nullptr || $instanceOf($UIResource, highlighter)) {
		$nc(this->editor)->setHighlighter($(createHighlighter()));
	}
	$var($TransferHandler, th, $nc(this->editor)->getTransferHandler());
	if (th == nullptr || $instanceOf($UIResource, th)) {
		$nc(this->editor)->setTransferHandler($(getTransferHandler()));
	}
}

void BasicTextUI::uninstallDefaults() {
	$nc(this->editor)->removeMouseListener(static_cast<$MouseListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(this->dragListener))));
	$nc(this->editor)->removeMouseMotionListener(static_cast<$MouseMotionListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(this->dragListener))));
	if ($instanceOf($UIResource, $($nc(this->editor)->getCaretColor()))) {
		$nc(this->editor)->setCaretColor(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->editor)->getSelectionColor()))) {
		$nc(this->editor)->setSelectionColor(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->editor)->getDisabledTextColor()))) {
		$nc(this->editor)->setDisabledTextColor(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->editor)->getSelectedTextColor()))) {
		$nc(this->editor)->setSelectedTextColor(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->editor)->getBorder()))) {
		$nc(this->editor)->setBorder(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->editor)->getMargin()))) {
		$nc(this->editor)->setMargin(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->editor)->getCaret()))) {
		$nc(this->editor)->setCaret(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->editor)->getHighlighter()))) {
		$nc(this->editor)->setHighlighter(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->editor)->getTransferHandler()))) {
		$nc(this->editor)->setTransferHandler(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->editor)->getCursor()))) {
		$nc(this->editor)->setCursor(nullptr);
	}
}

void BasicTextUI::installListeners() {
}

void BasicTextUI::uninstallListeners() {
}

void BasicTextUI::installKeyboardActions() {
	$nc(this->editor)->setKeymap($(createKeymap()));
	$var($InputMap, km, getInputMap());
	if (km != nullptr) {
		$SwingUtilities::replaceUIInputMap(this->editor, $JComponent::WHEN_FOCUSED, km);
	}
	$var($ActionMap, map, getActionMap());
	if (map != nullptr) {
		$SwingUtilities::replaceUIActionMap(this->editor, map);
	}
	updateFocusAcceleratorBinding(false);
}

$InputMap* BasicTextUI::getInputMap() {
	$var($InputMap, map, $new($InputMapUIResource));
	$var($InputMap, shared, $cast($InputMap, $DefaultLookup::get(this->editor, this, $$str({$(getPropertyPrefix()), ".focusInputMap"_s}))));
	if (shared != nullptr) {
		map->setParent(shared);
	}
	return map;
}

void BasicTextUI::updateFocusAcceleratorBinding(bool changed) {
	char16_t accelerator = $nc(this->editor)->getFocusAccelerator();
	if (changed || accelerator != u'\0') {
		$var($InputMap, km, $SwingUtilities::getUIInputMap(this->editor, $JComponent::WHEN_IN_FOCUSED_WINDOW));
		if (km == nullptr && accelerator != u'\0') {
			$assign(km, $new($ComponentInputMapUIResource, this->editor));
			$SwingUtilities::replaceUIInputMap(this->editor, $JComponent::WHEN_IN_FOCUSED_WINDOW, km);
			$var($ActionMap, am, getActionMap());
			$SwingUtilities::replaceUIActionMap(this->editor, am);
		}
		if (km != nullptr) {
			km->clear();
			if (accelerator != u'\0') {
				km->put($($KeyStroke::getKeyStroke((int32_t)accelerator, $BasicLookAndFeel::getFocusAcceleratorKeyMask())), "requestFocus"_s);
				km->put($($KeyStroke::getKeyStroke((int32_t)accelerator, $SwingUtilities2::setAltGraphMask($BasicLookAndFeel::getFocusAcceleratorKeyMask()))), "requestFocus"_s);
			}
		}
	}
}

void BasicTextUI::updateFocusTraversalKeys() {
	$var($EditorKit, editorKit, getEditorKit(this->editor));
	if (editorKit != nullptr && $instanceOf($DefaultEditorKit, editorKit)) {
		$var($Set, storedForwardTraversalKeys, $nc(this->editor)->getFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS));
		$var($Set, storedBackwardTraversalKeys, $nc(this->editor)->getFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS));
		$var($Set, forwardTraversalKeys, $new($HashSet, static_cast<$Collection*>(storedForwardTraversalKeys)));
		$var($Set, backwardTraversalKeys, $new($HashSet, static_cast<$Collection*>(storedBackwardTraversalKeys)));
		if ($nc(this->editor)->isEditable()) {
			forwardTraversalKeys->remove($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, 0)));
			backwardTraversalKeys->remove($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, $InputEvent::SHIFT_MASK)));
		} else {
			forwardTraversalKeys->add($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, 0)));
			backwardTraversalKeys->add($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, $InputEvent::SHIFT_MASK)));
		}
		$LookAndFeel::installProperty(this->editor, "focusTraversalKeysForward"_s, forwardTraversalKeys);
		$LookAndFeel::installProperty(this->editor, "focusTraversalKeysBackward"_s, backwardTraversalKeys);
	}
}

void BasicTextUI::updateCursor() {
	bool var$0 = (!$nc(this->editor)->isCursorSet());
	if (var$0 || $instanceOf($UIResource, $($nc(this->editor)->getCursor()))) {
		$var($Cursor, cursor, ($nc(this->editor)->isEditable()) ? static_cast<$Cursor*>(BasicTextUI::textCursor) : ($Cursor*)nullptr);
		$nc(this->editor)->setCursor(cursor);
	}
}

$TransferHandler* BasicTextUI::getTransferHandler() {
	return BasicTextUI::defaultTransferHandler;
}

$ActionMap* BasicTextUI::getActionMap() {
	$var($String, mapName, $str({$(getPropertyPrefix()), ".actionMap"_s}));
	$var($ActionMap, map, $cast($ActionMap, $UIManager::get(mapName)));
	if (map == nullptr) {
		$assign(map, createActionMap());
		if (map != nullptr) {
			$nc($($UIManager::getLookAndFeelDefaults()))->put(mapName, map);
		}
	}
	$var($ActionMap, componentMap, $new($ActionMapUIResource));
	componentMap->put("requestFocus"_s, $$new($BasicTextUI$FocusAction, this));
	if ($instanceOf($DefaultEditorKit, $(getEditorKit(this->editor)))) {
		if (map != nullptr) {
			$init($DefaultEditorKit);
			$var($Object, obj, map->get($DefaultEditorKit::insertBreakAction));
			if (obj != nullptr && $instanceOf($DefaultEditorKit$InsertBreakAction, obj)) {
				$var($Action, action, $new($BasicTextUI$TextActionWrapper, this, $cast($TextAction, obj)));
				$init($Action);
				componentMap->put($(action->getValue($Action::NAME)), action);
			}
		}
	}
	if (map != nullptr) {
		componentMap->setParent(map);
	}
	return componentMap;
}

$ActionMap* BasicTextUI::createActionMap() {
	$var($ActionMap, map, $new($ActionMapUIResource));
	$var($ActionArray, actions, $nc(this->editor)->getActions());
	int32_t n = $nc(actions)->length;
	for (int32_t i = 0; i < n; ++i) {
		$var($Action, a, actions->get(i));
		$init($Action);
		map->put($($nc(a)->getValue($Action::NAME)), a);
	}
	$init($Action);
	$var($Object, var$0, $nc($($TransferHandler::getCutAction()))->getValue($Action::NAME));
	map->put(var$0, $($TransferHandler::getCutAction()));
	$var($Object, var$1, $nc($($TransferHandler::getCopyAction()))->getValue($Action::NAME));
	map->put(var$1, $($TransferHandler::getCopyAction()));
	$var($Object, var$2, $nc($($TransferHandler::getPasteAction()))->getValue($Action::NAME));
	map->put(var$2, $($TransferHandler::getPasteAction()));
	return map;
}

void BasicTextUI::uninstallKeyboardActions() {
	$nc(this->editor)->setKeymap(nullptr);
	$SwingUtilities::replaceUIInputMap(this->editor, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
	$SwingUtilities::replaceUIActionMap(this->editor, nullptr);
}

void BasicTextUI::paintBackground($Graphics* g) {
	$nc(g)->setColor($($nc(this->editor)->getBackground()));
	int32_t var$0 = $nc(this->editor)->getWidth();
	g->fillRect(0, 0, var$0, $nc(this->editor)->getHeight());
}

$JTextComponent* BasicTextUI::getComponent() {
	return this->editor;
}

void BasicTextUI::modelChanged() {
	$var($ViewFactory, f, $nc(this->rootView)->getViewFactory());
	$var($Document, doc, $nc(this->editor)->getDocument());
	$var($Element, elem, $nc(doc)->getDefaultRootElement());
	setView($($nc(f)->create(elem)));
}

void BasicTextUI::setView($View* v) {
	$nc(this->rootView)->setView(v);
	this->painted = false;
	$nc(this->editor)->revalidate();
	$nc(this->editor)->repaint();
}

void BasicTextUI::paintSafely($Graphics* g) {
	this->painted = true;
	$var($Highlighter, highlighter, $nc(this->editor)->getHighlighter());
	$var($Caret, caret, $nc(this->editor)->getCaret());
	if ($nc(this->editor)->isOpaque()) {
		paintBackground(g);
	}
	if (highlighter != nullptr) {
		highlighter->paint(g);
	}
	$var($Rectangle, alloc, getVisibleEditorRect());
	if (alloc != nullptr) {
		$nc(this->rootView)->paint(g, alloc);
	}
	if (caret != nullptr) {
		caret->paint(g);
	}
	if (this->dropCaret != nullptr) {
		$nc(this->dropCaret)->paint(g);
	}
}

void BasicTextUI::installUI($JComponent* c) {
	if ($instanceOf($JTextComponent, c)) {
		$set(this, editor, $cast($JTextComponent, c));
		$init($Boolean);
		$LookAndFeel::installProperty(this->editor, "opaque"_s, $Boolean::TRUE);
		$LookAndFeel::installProperty(this->editor, "autoscrolls"_s, $Boolean::TRUE);
		installDefaults();
		installDefaults2();
		this->caretMargin = -1;
		$var($Object, property, $UIManager::get("Caret.width"_s));
		if ($instanceOf($Number, property)) {
			this->caretMargin = $nc(($cast($Number, property)))->intValue();
		}
		$assign(property, $nc(c)->getClientProperty("caretWidth"_s));
		if ($instanceOf($Number, property)) {
			this->caretMargin = $nc(($cast($Number, property)))->intValue();
		}
		if (this->caretMargin < 0) {
			this->caretMargin = BasicTextUI::DEFAULT_CARET_MARGIN;
		}
		$nc(this->editor)->addPropertyChangeListener(this->updateHandler);
		$var($Document, doc, $nc(this->editor)->getDocument());
		if (doc == nullptr) {
			$nc(this->editor)->setDocument($($nc($(getEditorKit(this->editor)))->createDefaultDocument()));
		} else {
			$nc(doc)->addDocumentListener(this->updateHandler);
			modelChanged();
		}
		installListeners();
		installKeyboardActions();
		$var($LayoutManager, oldLayout, $nc(this->editor)->getLayout());
		if ((oldLayout == nullptr) || ($instanceOf($UIResource, oldLayout))) {
			$nc(this->editor)->setLayout(this->updateHandler);
		}
		updateBackground(this->editor);
	} else {
		$throwNew($Error, "TextUI needs JTextComponent"_s);
	}
}

void BasicTextUI::uninstallUI($JComponent* c) {
	$nc(this->editor)->removePropertyChangeListener(this->updateHandler);
	$nc($($nc(this->editor)->getDocument()))->removeDocumentListener(this->updateHandler);
	this->painted = false;
	uninstallDefaults();
	$nc(this->rootView)->setView(nullptr);
	$nc(c)->removeAll();
	$var($LayoutManager, lm, c->getLayout());
	if ($instanceOf($UIResource, lm)) {
		c->setLayout(nullptr);
	}
	uninstallKeyboardActions();
	uninstallListeners();
	$set(this, editor, nullptr);
}

void BasicTextUI::update($Graphics* g, $JComponent* c) {
	paint(g, c);
}

void BasicTextUI::paint($Graphics* g, $JComponent* c) {
	bool var$0 = ($nc(this->rootView)->getViewCount() > 0);
	if (var$0 && ($nc(this->rootView)->getView(0) != nullptr)) {
		$var($Document, doc, $nc(this->editor)->getDocument());
		if ($instanceOf($AbstractDocument, doc)) {
			$nc(($cast($AbstractDocument, doc)))->readLock();
		}
		{
			$var($Throwable, var$1, nullptr);
			try {
				paintSafely(g);
			} catch ($Throwable&) {
				$assign(var$1, $catch());
			} /*finally*/ {
				if ($instanceOf($AbstractDocument, doc)) {
					$nc(($cast($AbstractDocument, doc)))->readUnlock();
				}
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
}

$Dimension* BasicTextUI::getPreferredSize($JComponent* c) {
	$var($Document, doc, $nc(this->editor)->getDocument());
	$var($Insets, i, $nc(c)->getInsets());
	$var($Dimension, d, c->getSize());
	if ($instanceOf($AbstractDocument, doc)) {
		$nc(($cast($AbstractDocument, doc)))->readLock();
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (($nc(d)->width > ($nc(i)->left + i->right + this->caretMargin)) && (d->height > (i->top + i->bottom))) {
				$nc(this->rootView)->setSize((float)(d->width - i->left - i->right - this->caretMargin), (float)(d->height - i->top - i->bottom));
			} else if (d->width == 0 && d->height == 0) {
				$nc(this->rootView)->setSize((float)$Integer::MAX_VALUE, (float)$Integer::MAX_VALUE);
			}
			d->width = (int32_t)$Math::min($cast(int64_t, $nc(this->rootView)->getPreferredSpan($View::X_AXIS)) + (int64_t)$nc(i)->left + (int64_t)i->right + this->caretMargin, (int64_t)$Integer::MAX_VALUE);
			d->height = (int32_t)$Math::min($cast(int64_t, $nc(this->rootView)->getPreferredSpan($View::Y_AXIS)) + (int64_t)$nc(i)->top + (int64_t)i->bottom, (int64_t)$Integer::MAX_VALUE);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->readUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return d;
}

$Dimension* BasicTextUI::getMinimumSize($JComponent* c) {
	$var($Document, doc, $nc(this->editor)->getDocument());
	$var($Insets, i, $nc(c)->getInsets());
	$var($Dimension, d, $new($Dimension));
	if ($instanceOf($AbstractDocument, doc)) {
		$nc(($cast($AbstractDocument, doc)))->readLock();
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			d->width = $cast(int32_t, $nc(this->rootView)->getMinimumSpan($View::X_AXIS)) + $nc(i)->left + i->right + this->caretMargin;
			d->height = $cast(int32_t, $nc(this->rootView)->getMinimumSpan($View::Y_AXIS)) + i->top + i->bottom;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->readUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return d;
}

$Dimension* BasicTextUI::getMaximumSize($JComponent* c) {
	$var($Document, doc, $nc(this->editor)->getDocument());
	$var($Insets, i, $nc(c)->getInsets());
	$var($Dimension, d, $new($Dimension));
	if ($instanceOf($AbstractDocument, doc)) {
		$nc(($cast($AbstractDocument, doc)))->readLock();
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			d->width = (int32_t)$Math::min($cast(int64_t, $nc(this->rootView)->getMaximumSpan($View::X_AXIS)) + (int64_t)$nc(i)->left + (int64_t)i->right + this->caretMargin, (int64_t)$Integer::MAX_VALUE);
			d->height = (int32_t)$Math::min($cast(int64_t, $nc(this->rootView)->getMaximumSpan($View::Y_AXIS)) + (int64_t)$nc(i)->top + (int64_t)i->bottom, (int64_t)$Integer::MAX_VALUE);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->readUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return d;
}

$Rectangle* BasicTextUI::getVisibleEditorRect() {
	$var($Rectangle, alloc, $nc(this->editor)->getBounds());
	if (($nc(alloc)->width > 0) && (alloc->height > 0)) {
		alloc->x = (alloc->y = 0);
		$var($Insets, insets, $nc(this->editor)->getInsets());
		alloc->x += $nc(insets)->left;
		alloc->y += insets->top;
		alloc->width -= insets->left + insets->right + this->caretMargin;
		alloc->height -= insets->top + insets->bottom;
		return alloc;
	}
	return nullptr;
}

$Rectangle* BasicTextUI::modelToView($JTextComponent* tc, int32_t pos) {
	$init($Position$Bias);
	return modelToView(tc, pos, $Position$Bias::Forward);
}

$Rectangle* BasicTextUI::modelToView($JTextComponent* tc, int32_t pos, $Position$Bias* bias) {
	return $cast($Rectangle, modelToView(tc, pos, bias, false));
}

$Rectangle2D* BasicTextUI::modelToView2D($JTextComponent* tc, int32_t pos, $Position$Bias* bias) {
	return modelToView(tc, pos, bias, true);
}

$Rectangle2D* BasicTextUI::modelToView($JTextComponent* tc, int32_t pos, $Position$Bias* bias, bool useFPAPI) {
	$var($Document, doc, $nc(this->editor)->getDocument());
	if ($instanceOf($AbstractDocument, doc)) {
		$nc(($cast($AbstractDocument, doc)))->readLock();
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($Rectangle2D, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Rectangle, alloc, getVisibleEditorRect());
			if (alloc != nullptr) {
				$nc(this->rootView)->setSize((float)alloc->width, (float)alloc->height);
				$var($Shape, s, $nc(this->rootView)->modelToView(pos, alloc, bias));
				if (s != nullptr) {
					$assign(var$2, useFPAPI ? s->getBounds2D() : static_cast<$Rectangle2D*>(s->getBounds()));
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->readUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return nullptr;
}

int32_t BasicTextUI::viewToModel($JTextComponent* tc, $Point* pt) {
	return viewToModel(tc, pt, BasicTextUI::discardBias);
}

int32_t BasicTextUI::viewToModel($JTextComponent* tc, $Point* pt, $Position$BiasArray* biasReturn) {
	return viewToModel(tc, (float)$nc(pt)->x, (float)pt->y, biasReturn);
}

int32_t BasicTextUI::viewToModel2D($JTextComponent* tc, $Point2D* pt, $Position$BiasArray* biasReturn) {
	$var($JTextComponent, var$0, tc);
	float var$1 = (float)$nc(pt)->getX();
	return viewToModel(var$0, var$1, (float)pt->getY(), biasReturn);
}

int32_t BasicTextUI::viewToModel($JTextComponent* tc, float x, float y, $Position$BiasArray* biasReturn) {
	int32_t offs = -1;
	$var($Document, doc, $nc(this->editor)->getDocument());
	if ($instanceOf($AbstractDocument, doc)) {
		$nc(($cast($AbstractDocument, doc)))->readLock();
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Rectangle, alloc, getVisibleEditorRect());
			if (alloc != nullptr) {
				$nc(this->rootView)->setSize((float)alloc->width, (float)alloc->height);
				offs = $nc(this->rootView)->viewToModel(x, y, alloc, biasReturn);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->readUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return offs;
}

int32_t BasicTextUI::getNextVisualPositionFrom($JTextComponent* t, int32_t pos, $Position$Bias* b, int32_t direction, $Position$BiasArray* biasRet) {
	$var($Document, doc, $nc(this->editor)->getDocument());
	if (pos < -1 || pos > $nc(doc)->getLength()) {
		$throwNew($BadLocationException, "Invalid position"_s, pos);
	}
	if ($instanceOf($AbstractDocument, doc)) {
		$nc(($cast($AbstractDocument, doc)))->readLock();
	}
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (this->painted) {
				$var($Rectangle, alloc, getVisibleEditorRect());
				if (alloc != nullptr) {
					$nc(this->rootView)->setSize((float)alloc->width, (float)alloc->height);
				}
				var$2 = $nc(this->rootView)->getNextVisualPositionFrom(pos, b, alloc, direction, biasRet);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->readUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return -1;
}

void BasicTextUI::damageRange($JTextComponent* tc, int32_t p0, int32_t p1) {
	$init($Position$Bias);
	damageRange(tc, p0, p1, $Position$Bias::Forward, $Position$Bias::Backward);
}

void BasicTextUI::damageRange($JTextComponent* t, int32_t p0, int32_t p1, $Position$Bias* p0Bias, $Position$Bias* p1Bias) {
	if (this->painted) {
		$var($Rectangle, alloc, getVisibleEditorRect());
		if (alloc != nullptr) {
			$var($Document, doc, $nc(t)->getDocument());
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->readLock();
			}
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc(this->rootView)->setSize((float)alloc->width, (float)alloc->height);
						$var($Shape, toDamage, $nc(this->rootView)->modelToView(p0, p0Bias, p1, p1Bias, alloc));
						$var($Rectangle, rect, ($instanceOf($Rectangle, toDamage)) ? $cast($Rectangle, toDamage) : $nc(toDamage)->getBounds());
						$nc(this->editor)->repaint($nc(rect)->x, rect->y, rect->width, rect->height);
					} catch ($BadLocationException&) {
						$catch();
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					if ($instanceOf($AbstractDocument, doc)) {
						$nc(($cast($AbstractDocument, doc)))->readUnlock();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

$EditorKit* BasicTextUI::getEditorKit($JTextComponent* tc) {
	return BasicTextUI::defaultKit;
}

$View* BasicTextUI::getRootView($JTextComponent* tc) {
	return this->rootView;
}

$String* BasicTextUI::getToolTipText($JTextComponent* t, $Point* pt) {
	if (!this->painted) {
		return nullptr;
	}
	$var($Document, doc, $nc(this->editor)->getDocument());
	$var($String, tt, nullptr);
	$var($Rectangle, alloc, getVisibleEditorRect());
	if (alloc != nullptr) {
		if ($instanceOf($AbstractDocument, doc)) {
			$nc(($cast($AbstractDocument, doc)))->readLock();
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				$assign(tt, $nc(this->rootView)->getToolTipText((float)$nc(pt)->x, (float)pt->y, alloc));
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if ($instanceOf($AbstractDocument, doc)) {
					$nc(($cast($AbstractDocument, doc)))->readUnlock();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return tt;
}

$View* BasicTextUI::create($Element* elem) {
	return nullptr;
}

$View* BasicTextUI::create($Element* elem, int32_t p0, int32_t p1) {
	return nullptr;
}

$BasicTextUI$DragListener* BasicTextUI::getDragListener() {
	$init(BasicTextUI);
	$load($BasicTextUI$DragListener);
	$synchronized($BasicTextUI$DragListener::class$) {
		$var($BasicTextUI$DragListener, listener, $cast($BasicTextUI$DragListener, $nc($($AppContext::getAppContext()))->get($BasicTextUI$DragListener::class$)));
		if (listener == nullptr) {
			$assign(listener, $new($BasicTextUI$DragListener));
			$nc($($AppContext::getAppContext()))->put($BasicTextUI$DragListener::class$, listener);
		}
		return listener;
	}
}

void clinit$BasicTextUI($Class* class$) {
	$assignStatic(BasicTextUI::textCursor, $new($BasicTextUI$BasicCursor, $Cursor::TEXT_CURSOR));
	$assignStatic(BasicTextUI::defaultKit, $new($DefaultEditorKit));
	$assignStatic(BasicTextUI::defaultTransferHandler, $new($BasicTextUI$TextTransferHandler));
	$assignStatic(BasicTextUI::discardBias, $new($Position$BiasArray, 1));
}

BasicTextUI::BasicTextUI() {
}

$Class* BasicTextUI::load$($String* name, bool initialize) {
	$loadClass(BasicTextUI, name, initialize, &_BasicTextUI_ClassInfo_, clinit$BasicTextUI, allocate$BasicTextUI);
	return class$;
}

$Class* BasicTextUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax