#include <javax/swing/text/StyledEditorKit.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/event/CaretListener.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledEditorKit$1.h>
#include <javax/swing/text/StyledEditorKit$AlignmentAction.h>
#include <javax/swing/text/StyledEditorKit$AttributeTracker.h>
#include <javax/swing/text/StyledEditorKit$BoldAction.h>
#include <javax/swing/text/StyledEditorKit$FontFamilyAction.h>
#include <javax/swing/text/StyledEditorKit$FontSizeAction.h>
#include <javax/swing/text/StyledEditorKit$ItalicAction.h>
#include <javax/swing/text/StyledEditorKit$StyledInsertBreakAction.h>
#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>
#include <javax/swing/text/StyledEditorKit$StyledViewFactory.h>
#include <javax/swing/text/StyledEditorKit$UnderlineAction.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef ALIGN_CENTER
#undef ALIGN_LEFT
#undef ALIGN_RIGHT

using $ActionArray = $Array<::javax::swing::Action>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JEditorPane = ::javax::swing::JEditorPane;
using $CaretListener = ::javax::swing::event::CaretListener;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Caret = ::javax::swing::text::Caret;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit$1 = ::javax::swing::text::StyledEditorKit$1;
using $StyledEditorKit$AlignmentAction = ::javax::swing::text::StyledEditorKit$AlignmentAction;
using $StyledEditorKit$AttributeTracker = ::javax::swing::text::StyledEditorKit$AttributeTracker;
using $StyledEditorKit$BoldAction = ::javax::swing::text::StyledEditorKit$BoldAction;
using $StyledEditorKit$FontFamilyAction = ::javax::swing::text::StyledEditorKit$FontFamilyAction;
using $StyledEditorKit$FontSizeAction = ::javax::swing::text::StyledEditorKit$FontSizeAction;
using $StyledEditorKit$ItalicAction = ::javax::swing::text::StyledEditorKit$ItalicAction;
using $StyledEditorKit$StyledInsertBreakAction = ::javax::swing::text::StyledEditorKit$StyledInsertBreakAction;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;
using $StyledEditorKit$StyledViewFactory = ::javax::swing::text::StyledEditorKit$StyledViewFactory;
using $StyledEditorKit$UnderlineAction = ::javax::swing::text::StyledEditorKit$UnderlineAction;
using $TextAction = ::javax::swing::text::TextAction;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyledEditorKit_FieldInfo_[] = {
	{"defaultFactory", "Ljavax/swing/text/ViewFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StyledEditorKit, defaultFactory)},
	{"currentRun", "Ljavax/swing/text/Element;", nullptr, 0, $field(StyledEditorKit, currentRun)},
	{"currentParagraph", "Ljavax/swing/text/Element;", nullptr, 0, $field(StyledEditorKit, currentParagraph)},
	{"inputAttributes", "Ljavax/swing/text/MutableAttributeSet;", nullptr, 0, $field(StyledEditorKit, inputAttributes)},
	{"inputAttributeUpdater", "Ljavax/swing/text/StyledEditorKit$AttributeTracker;", nullptr, $PRIVATE, $field(StyledEditorKit, inputAttributeUpdater)},
	{"defaultActions", "[Ljavax/swing/Action;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StyledEditorKit, defaultActions)},
	{}
};

$MethodInfo _StyledEditorKit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StyledEditorKit::*)()>(&StyledEditorKit::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"createDefaultDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"createInputAttributeUpdated", "()V", nullptr, $PRIVATE, $method(static_cast<void(StyledEditorKit::*)()>(&StyledEditorKit::createInputAttributeUpdated))},
	{"createInputAttributes", "()V", nullptr, $PRIVATE, $method(static_cast<void(StyledEditorKit::*)()>(&StyledEditorKit::createInputAttributes))},
	{"createInputAttributes", "(Ljavax/swing/text/Element;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PROTECTED},
	{"deinstall", "(Ljavax/swing/JEditorPane;)V", nullptr, $PUBLIC},
	{"getActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getCharacterAttributeRun", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getInputAttributes", "()Ljavax/swing/text/MutableAttributeSet;", nullptr, $PUBLIC},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC},
	{"install", "(Ljavax/swing/JEditorPane;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyledEditorKit_InnerClassesInfo_[] = {
	{"javax.swing.text.StyledEditorKit$StyledInsertBreakAction", "javax.swing.text.StyledEditorKit", "StyledInsertBreakAction", $STATIC},
	{"javax.swing.text.StyledEditorKit$UnderlineAction", "javax.swing.text.StyledEditorKit", "UnderlineAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$ItalicAction", "javax.swing.text.StyledEditorKit", "ItalicAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$BoldAction", "javax.swing.text.StyledEditorKit", "BoldAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$AlignmentAction", "javax.swing.text.StyledEditorKit", "AlignmentAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$ForegroundAction", "javax.swing.text.StyledEditorKit", "ForegroundAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$FontSizeAction", "javax.swing.text.StyledEditorKit", "FontSizeAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$FontFamilyAction", "javax.swing.text.StyledEditorKit", "FontFamilyAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.text.StyledEditorKit$StyledViewFactory", "javax.swing.text.StyledEditorKit", "StyledViewFactory", $STATIC},
	{"javax.swing.text.StyledEditorKit$AttributeTracker", "javax.swing.text.StyledEditorKit", "AttributeTracker", 0},
	{"javax.swing.text.StyledEditorKit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StyledEditorKit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyledEditorKit",
	"javax.swing.text.DefaultEditorKit",
	nullptr,
	_StyledEditorKit_FieldInfo_,
	_StyledEditorKit_MethodInfo_,
	nullptr,
	nullptr,
	_StyledEditorKit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.StyledEditorKit$StyledInsertBreakAction,javax.swing.text.StyledEditorKit$UnderlineAction,javax.swing.text.StyledEditorKit$ItalicAction,javax.swing.text.StyledEditorKit$BoldAction,javax.swing.text.StyledEditorKit$AlignmentAction,javax.swing.text.StyledEditorKit$ForegroundAction,javax.swing.text.StyledEditorKit$FontSizeAction,javax.swing.text.StyledEditorKit$FontFamilyAction,javax.swing.text.StyledEditorKit$StyledTextAction,javax.swing.text.StyledEditorKit$StyledViewFactory,javax.swing.text.StyledEditorKit$AttributeTracker,javax.swing.text.StyledEditorKit$1"
};

$Object* allocate$StyledEditorKit($Class* clazz) {
	return $of($alloc(StyledEditorKit));
}

$ViewFactory* StyledEditorKit::defaultFactory = nullptr;
$ActionArray* StyledEditorKit::defaultActions = nullptr;

void StyledEditorKit::init$() {
	$DefaultEditorKit::init$();
	createInputAttributeUpdated();
	createInputAttributes();
}

$MutableAttributeSet* StyledEditorKit::getInputAttributes() {
	return this->inputAttributes;
}

$Element* StyledEditorKit::getCharacterAttributeRun() {
	return this->currentRun;
}

$ActionArray* StyledEditorKit::getActions() {
	return $TextAction::augmentList($($DefaultEditorKit::getActions()), StyledEditorKit::defaultActions);
}

$Document* StyledEditorKit::createDefaultDocument() {
	return static_cast<$Document*>(static_cast<$AbstractDocument*>($new($DefaultStyledDocument)));
}

void StyledEditorKit::install($JEditorPane* c) {
	$nc(c)->addCaretListener(this->inputAttributeUpdater);
	c->addPropertyChangeListener(this->inputAttributeUpdater);
	$var($Caret, caret, c->getCaret());
	if (caret != nullptr) {
		int32_t var$0 = caret->getDot();
		$nc(this->inputAttributeUpdater)->updateInputAttributes(var$0, caret->getMark(), c);
	}
}

void StyledEditorKit::deinstall($JEditorPane* c) {
	$nc(c)->removeCaretListener(this->inputAttributeUpdater);
	c->removePropertyChangeListener(this->inputAttributeUpdater);
	$set(this, currentRun, nullptr);
	$set(this, currentParagraph, nullptr);
}

$ViewFactory* StyledEditorKit::getViewFactory() {
	return StyledEditorKit::defaultFactory;
}

$Object* StyledEditorKit::clone() {
	$var(StyledEditorKit, o, $cast(StyledEditorKit, $DefaultEditorKit::clone()));
	$set($nc(o), currentRun, ($assignField(o, currentParagraph, nullptr)));
	o->createInputAttributeUpdated();
	o->createInputAttributes();
	return $of(o);
}

void StyledEditorKit::createInputAttributes() {
	$set(this, inputAttributes, $new($StyledEditorKit$1, this));
}

void StyledEditorKit::createInputAttributeUpdated() {
	$set(this, inputAttributeUpdater, $new($StyledEditorKit$AttributeTracker, this));
}

void StyledEditorKit::createInputAttributes($Element* element, $MutableAttributeSet* set) {
	bool var$1 = $nc($($nc(element)->getAttributes()))->getAttributeCount() > 0;
	if (!var$1) {
		int32_t var$2 = $nc(element)->getEndOffset();
		var$1 = var$2 - element->getStartOffset() > 1;
	}
	bool var$0 = var$1;
	if (!var$0) {
		int32_t var$3 = $nc(element)->getEndOffset();
		var$0 = var$3 < $nc($(element->getDocument()))->getLength();
	}
	if (var$0) {
		$nc(set)->removeAttributes(static_cast<$AttributeSet*>(set));
		set->addAttributes($(element->getAttributes()));
		$init($StyleConstants);
		set->removeAttribute($StyleConstants::ComponentAttribute);
		set->removeAttribute($StyleConstants::IconAttribute);
		$init($AbstractDocument);
		set->removeAttribute($AbstractDocument::ElementNameAttribute);
		set->removeAttribute($StyleConstants::ComposedTextAttribute);
	}
}

void clinit$StyledEditorKit($Class* class$) {
	$assignStatic(StyledEditorKit::defaultFactory, $new($StyledEditorKit$StyledViewFactory));
	$assignStatic(StyledEditorKit::defaultActions, $new($ActionArray, {
		static_cast<$Action*>($$new($StyledEditorKit$FontFamilyAction, "font-family-SansSerif"_s, "SansSerif"_s)),
		static_cast<$Action*>($$new($StyledEditorKit$FontFamilyAction, "font-family-Monospaced"_s, "Monospaced"_s)),
		static_cast<$Action*>($$new($StyledEditorKit$FontFamilyAction, "font-family-Serif"_s, "Serif"_s)),
		static_cast<$Action*>($$new($StyledEditorKit$FontSizeAction, "font-size-8"_s, 8)),
		static_cast<$Action*>($$new($StyledEditorKit$FontSizeAction, "font-size-10"_s, 10)),
		static_cast<$Action*>($$new($StyledEditorKit$FontSizeAction, "font-size-12"_s, 12)),
		static_cast<$Action*>($$new($StyledEditorKit$FontSizeAction, "font-size-14"_s, 14)),
		static_cast<$Action*>($$new($StyledEditorKit$FontSizeAction, "font-size-16"_s, 16)),
		static_cast<$Action*>($$new($StyledEditorKit$FontSizeAction, "font-size-18"_s, 18)),
		static_cast<$Action*>($$new($StyledEditorKit$FontSizeAction, "font-size-24"_s, 24)),
		static_cast<$Action*>($$new($StyledEditorKit$FontSizeAction, "font-size-36"_s, 36)),
		static_cast<$Action*>($$new($StyledEditorKit$FontSizeAction, "font-size-48"_s, 48)),
		static_cast<$Action*>($$new($StyledEditorKit$AlignmentAction, "left-justify"_s, $StyleConstants::ALIGN_LEFT)),
		static_cast<$Action*>($$new($StyledEditorKit$AlignmentAction, "center-justify"_s, $StyleConstants::ALIGN_CENTER)),
		static_cast<$Action*>($$new($StyledEditorKit$AlignmentAction, "right-justify"_s, $StyleConstants::ALIGN_RIGHT)),
		static_cast<$Action*>($$new($StyledEditorKit$BoldAction)),
		static_cast<$Action*>($$new($StyledEditorKit$ItalicAction)),
		static_cast<$Action*>($$new($StyledEditorKit$StyledInsertBreakAction)),
		static_cast<$Action*>($$new($StyledEditorKit$UnderlineAction))
	}));
}

StyledEditorKit::StyledEditorKit() {
}

$Class* StyledEditorKit::load$($String* name, bool initialize) {
	$loadClass(StyledEditorKit, name, initialize, &_StyledEditorKit_ClassInfo_, clinit$StyledEditorKit, allocate$StyledEditorKit);
	return class$;
}

$Class* StyledEditorKit::class$ = nullptr;

		} // text
	} // swing
} // javax