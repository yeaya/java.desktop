#include <javax/swing/text/DefaultEditorKit.h>

#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/Math.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultEditorKit$BeepAction.h>
#include <javax/swing/text/DefaultEditorKit$BeginAction.h>
#include <javax/swing/text/DefaultEditorKit$BeginLineAction.h>
#include <javax/swing/text/DefaultEditorKit$BeginParagraphAction.h>
#include <javax/swing/text/DefaultEditorKit$BeginWordAction.h>
#include <javax/swing/text/DefaultEditorKit$CopyAction.h>
#include <javax/swing/text/DefaultEditorKit$CutAction.h>
#include <javax/swing/text/DefaultEditorKit$DefaultKeyTypedAction.h>
#include <javax/swing/text/DefaultEditorKit$DeleteNextCharAction.h>
#include <javax/swing/text/DefaultEditorKit$DeletePrevCharAction.h>
#include <javax/swing/text/DefaultEditorKit$DeleteWordAction.h>
#include <javax/swing/text/DefaultEditorKit$DumpModelAction.h>
#include <javax/swing/text/DefaultEditorKit$EndAction.h>
#include <javax/swing/text/DefaultEditorKit$EndLineAction.h>
#include <javax/swing/text/DefaultEditorKit$EndParagraphAction.h>
#include <javax/swing/text/DefaultEditorKit$EndWordAction.h>
#include <javax/swing/text/DefaultEditorKit$InsertBreakAction.h>
#include <javax/swing/text/DefaultEditorKit$InsertContentAction.h>
#include <javax/swing/text/DefaultEditorKit$InsertTabAction.h>
#include <javax/swing/text/DefaultEditorKit$NextVisualPositionAction.h>
#include <javax/swing/text/DefaultEditorKit$NextWordAction.h>
#include <javax/swing/text/DefaultEditorKit$PageAction.h>
#include <javax/swing/text/DefaultEditorKit$PasteAction.h>
#include <javax/swing/text/DefaultEditorKit$PreviousWordAction.h>
#include <javax/swing/text/DefaultEditorKit$ReadOnlyAction.h>
#include <javax/swing/text/DefaultEditorKit$SelectAllAction.h>
#include <javax/swing/text/DefaultEditorKit$SelectLineAction.h>
#include <javax/swing/text/DefaultEditorKit$SelectParagraphAction.h>
#include <javax/swing/text/DefaultEditorKit$SelectWordAction.h>
#include <javax/swing/text/DefaultEditorKit$ToggleComponentOrientationAction.h>
#include <javax/swing/text/DefaultEditorKit$UnselectAction.h>
#include <javax/swing/text/DefaultEditorKit$VerticalPageAction.h>
#include <javax/swing/text/DefaultEditorKit$WritableAction.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef EAST
#undef NORTH
#undef SOUTH
#undef WEST

using $ActionArray = $Array<::javax::swing::Action>;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $SwingConstants = ::javax::swing::SwingConstants;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $DefaultEditorKit$BeepAction = ::javax::swing::text::DefaultEditorKit$BeepAction;
using $DefaultEditorKit$BeginAction = ::javax::swing::text::DefaultEditorKit$BeginAction;
using $DefaultEditorKit$BeginLineAction = ::javax::swing::text::DefaultEditorKit$BeginLineAction;
using $DefaultEditorKit$BeginParagraphAction = ::javax::swing::text::DefaultEditorKit$BeginParagraphAction;
using $DefaultEditorKit$BeginWordAction = ::javax::swing::text::DefaultEditorKit$BeginWordAction;
using $DefaultEditorKit$CopyAction = ::javax::swing::text::DefaultEditorKit$CopyAction;
using $DefaultEditorKit$CutAction = ::javax::swing::text::DefaultEditorKit$CutAction;
using $DefaultEditorKit$DefaultKeyTypedAction = ::javax::swing::text::DefaultEditorKit$DefaultKeyTypedAction;
using $DefaultEditorKit$DeleteNextCharAction = ::javax::swing::text::DefaultEditorKit$DeleteNextCharAction;
using $DefaultEditorKit$DeletePrevCharAction = ::javax::swing::text::DefaultEditorKit$DeletePrevCharAction;
using $DefaultEditorKit$DeleteWordAction = ::javax::swing::text::DefaultEditorKit$DeleteWordAction;
using $DefaultEditorKit$DumpModelAction = ::javax::swing::text::DefaultEditorKit$DumpModelAction;
using $DefaultEditorKit$EndAction = ::javax::swing::text::DefaultEditorKit$EndAction;
using $DefaultEditorKit$EndLineAction = ::javax::swing::text::DefaultEditorKit$EndLineAction;
using $DefaultEditorKit$EndParagraphAction = ::javax::swing::text::DefaultEditorKit$EndParagraphAction;
using $DefaultEditorKit$EndWordAction = ::javax::swing::text::DefaultEditorKit$EndWordAction;
using $DefaultEditorKit$InsertBreakAction = ::javax::swing::text::DefaultEditorKit$InsertBreakAction;
using $DefaultEditorKit$InsertContentAction = ::javax::swing::text::DefaultEditorKit$InsertContentAction;
using $DefaultEditorKit$InsertTabAction = ::javax::swing::text::DefaultEditorKit$InsertTabAction;
using $DefaultEditorKit$NextVisualPositionAction = ::javax::swing::text::DefaultEditorKit$NextVisualPositionAction;
using $DefaultEditorKit$NextWordAction = ::javax::swing::text::DefaultEditorKit$NextWordAction;
using $DefaultEditorKit$PageAction = ::javax::swing::text::DefaultEditorKit$PageAction;
using $DefaultEditorKit$PasteAction = ::javax::swing::text::DefaultEditorKit$PasteAction;
using $DefaultEditorKit$PreviousWordAction = ::javax::swing::text::DefaultEditorKit$PreviousWordAction;
using $DefaultEditorKit$ReadOnlyAction = ::javax::swing::text::DefaultEditorKit$ReadOnlyAction;
using $DefaultEditorKit$SelectAllAction = ::javax::swing::text::DefaultEditorKit$SelectAllAction;
using $DefaultEditorKit$SelectLineAction = ::javax::swing::text::DefaultEditorKit$SelectLineAction;
using $DefaultEditorKit$SelectParagraphAction = ::javax::swing::text::DefaultEditorKit$SelectParagraphAction;
using $DefaultEditorKit$SelectWordAction = ::javax::swing::text::DefaultEditorKit$SelectWordAction;
using $DefaultEditorKit$ToggleComponentOrientationAction = ::javax::swing::text::DefaultEditorKit$ToggleComponentOrientationAction;
using $DefaultEditorKit$UnselectAction = ::javax::swing::text::DefaultEditorKit$UnselectAction;
using $DefaultEditorKit$VerticalPageAction = ::javax::swing::text::DefaultEditorKit$VerticalPageAction;
using $DefaultEditorKit$WritableAction = ::javax::swing::text::DefaultEditorKit$WritableAction;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $Segment = ::javax::swing::text::Segment;
using $TextAction = ::javax::swing::text::TextAction;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit_FieldInfo_[] = {
	{"EndOfLineStringProperty", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, EndOfLineStringProperty)},
	{"insertContentAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, insertContentAction)},
	{"insertBreakAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, insertBreakAction)},
	{"insertTabAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, insertTabAction)},
	{"deletePrevCharAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, deletePrevCharAction)},
	{"deleteNextCharAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, deleteNextCharAction)},
	{"deleteNextWordAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, deleteNextWordAction)},
	{"deletePrevWordAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, deletePrevWordAction)},
	{"readOnlyAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, readOnlyAction)},
	{"writableAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, writableAction)},
	{"cutAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, cutAction)},
	{"copyAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, copyAction)},
	{"pasteAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, pasteAction)},
	{"beepAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, beepAction)},
	{"pageUpAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, pageUpAction)},
	{"pageDownAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, pageDownAction)},
	{"selectionPageUpAction", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionPageUpAction)},
	{"selectionPageDownAction", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionPageDownAction)},
	{"selectionPageLeftAction", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionPageLeftAction)},
	{"selectionPageRightAction", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionPageRightAction)},
	{"forwardAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, forwardAction)},
	{"backwardAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, backwardAction)},
	{"selectionForwardAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionForwardAction)},
	{"selectionBackwardAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionBackwardAction)},
	{"upAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, upAction)},
	{"downAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, downAction)},
	{"selectionUpAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionUpAction)},
	{"selectionDownAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionDownAction)},
	{"beginWordAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, beginWordAction)},
	{"endWordAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, endWordAction)},
	{"selectionBeginWordAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionBeginWordAction)},
	{"selectionEndWordAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionEndWordAction)},
	{"previousWordAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, previousWordAction)},
	{"nextWordAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, nextWordAction)},
	{"selectionPreviousWordAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionPreviousWordAction)},
	{"selectionNextWordAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionNextWordAction)},
	{"beginLineAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, beginLineAction)},
	{"endLineAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, endLineAction)},
	{"selectionBeginLineAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionBeginLineAction)},
	{"selectionEndLineAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionEndLineAction)},
	{"beginParagraphAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, beginParagraphAction)},
	{"endParagraphAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, endParagraphAction)},
	{"selectionBeginParagraphAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionBeginParagraphAction)},
	{"selectionEndParagraphAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionEndParagraphAction)},
	{"beginAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, beginAction)},
	{"endAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, endAction)},
	{"selectionBeginAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionBeginAction)},
	{"selectionEndAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectionEndAction)},
	{"selectWordAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectWordAction)},
	{"selectLineAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectLineAction)},
	{"selectParagraphAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectParagraphAction)},
	{"selectAllAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, selectAllAction)},
	{"unselectAction", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DefaultEditorKit, unselectAction)},
	{"toggleComponentOrientationAction", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DefaultEditorKit, toggleComponentOrientationAction)},
	{"defaultKeyTypedAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultEditorKit, defaultKeyTypedAction)},
	{"defaultActions", "[Ljavax/swing/Action;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultEditorKit, defaultActions)},
	{}
};

$MethodInfo _DefaultEditorKit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultEditorKit::*)()>(&DefaultEditorKit::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PUBLIC},
	{"createDefaultDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"getActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInputAttributes", "()Ljavax/swing/text/MutableAttributeSet;", nullptr, 0},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC},
	{"read", "(Ljava/io/InputStream;Ljavax/swing/text/Document;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"read", "(Ljava/io/Reader;Ljavax/swing/text/Document;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"write", "(Ljava/io/OutputStream;Ljavax/swing/text/Document;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"write", "(Ljava/io/Writer;Ljavax/swing/text/Document;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{}
};

$InnerClassInfo _DefaultEditorKit_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$ToggleComponentOrientationAction", "javax.swing.text.DefaultEditorKit", "ToggleComponentOrientationAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$UnselectAction", "javax.swing.text.DefaultEditorKit", "UnselectAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$SelectAllAction", "javax.swing.text.DefaultEditorKit", "SelectAllAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$SelectParagraphAction", "javax.swing.text.DefaultEditorKit", "SelectParagraphAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$SelectLineAction", "javax.swing.text.DefaultEditorKit", "SelectLineAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$SelectWordAction", "javax.swing.text.DefaultEditorKit", "SelectWordAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$EndAction", "javax.swing.text.DefaultEditorKit", "EndAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$BeginAction", "javax.swing.text.DefaultEditorKit", "BeginAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$EndParagraphAction", "javax.swing.text.DefaultEditorKit", "EndParagraphAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$BeginParagraphAction", "javax.swing.text.DefaultEditorKit", "BeginParagraphAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$EndLineAction", "javax.swing.text.DefaultEditorKit", "EndLineAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$BeginLineAction", "javax.swing.text.DefaultEditorKit", "BeginLineAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$NextWordAction", "javax.swing.text.DefaultEditorKit", "NextWordAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$PreviousWordAction", "javax.swing.text.DefaultEditorKit", "PreviousWordAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$EndWordAction", "javax.swing.text.DefaultEditorKit", "EndWordAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$BeginWordAction", "javax.swing.text.DefaultEditorKit", "BeginWordAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$NextVisualPositionAction", "javax.swing.text.DefaultEditorKit", "NextVisualPositionAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$DumpModelAction", "javax.swing.text.DefaultEditorKit", "DumpModelAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$PageAction", "javax.swing.text.DefaultEditorKit", "PageAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$VerticalPageAction", "javax.swing.text.DefaultEditorKit", "VerticalPageAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$BeepAction", "javax.swing.text.DefaultEditorKit", "BeepAction", $PUBLIC | $STATIC},
	{"javax.swing.text.DefaultEditorKit$PasteAction", "javax.swing.text.DefaultEditorKit", "PasteAction", $PUBLIC | $STATIC},
	{"javax.swing.text.DefaultEditorKit$CopyAction", "javax.swing.text.DefaultEditorKit", "CopyAction", $PUBLIC | $STATIC},
	{"javax.swing.text.DefaultEditorKit$CutAction", "javax.swing.text.DefaultEditorKit", "CutAction", $PUBLIC | $STATIC},
	{"javax.swing.text.DefaultEditorKit$WritableAction", "javax.swing.text.DefaultEditorKit", "WritableAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$ReadOnlyAction", "javax.swing.text.DefaultEditorKit", "ReadOnlyAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$DeleteWordAction", "javax.swing.text.DefaultEditorKit", "DeleteWordAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$DeleteNextCharAction", "javax.swing.text.DefaultEditorKit", "DeleteNextCharAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$DeletePrevCharAction", "javax.swing.text.DefaultEditorKit", "DeletePrevCharAction", $STATIC},
	{"javax.swing.text.DefaultEditorKit$InsertTabAction", "javax.swing.text.DefaultEditorKit", "InsertTabAction", $PUBLIC | $STATIC},
	{"javax.swing.text.DefaultEditorKit$InsertBreakAction", "javax.swing.text.DefaultEditorKit", "InsertBreakAction", $PUBLIC | $STATIC},
	{"javax.swing.text.DefaultEditorKit$InsertContentAction", "javax.swing.text.DefaultEditorKit", "InsertContentAction", $PUBLIC | $STATIC},
	{"javax.swing.text.DefaultEditorKit$DefaultKeyTypedAction", "javax.swing.text.DefaultEditorKit", "DefaultKeyTypedAction", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultEditorKit",
	"javax.swing.text.EditorKit",
	nullptr,
	_DefaultEditorKit_FieldInfo_,
	_DefaultEditorKit_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit$ToggleComponentOrientationAction,javax.swing.text.DefaultEditorKit$UnselectAction,javax.swing.text.DefaultEditorKit$SelectAllAction,javax.swing.text.DefaultEditorKit$SelectParagraphAction,javax.swing.text.DefaultEditorKit$SelectLineAction,javax.swing.text.DefaultEditorKit$SelectWordAction,javax.swing.text.DefaultEditorKit$EndAction,javax.swing.text.DefaultEditorKit$BeginAction,javax.swing.text.DefaultEditorKit$EndParagraphAction,javax.swing.text.DefaultEditorKit$BeginParagraphAction,javax.swing.text.DefaultEditorKit$EndLineAction,javax.swing.text.DefaultEditorKit$BeginLineAction,javax.swing.text.DefaultEditorKit$NextWordAction,javax.swing.text.DefaultEditorKit$PreviousWordAction,javax.swing.text.DefaultEditorKit$EndWordAction,javax.swing.text.DefaultEditorKit$BeginWordAction,javax.swing.text.DefaultEditorKit$NextVisualPositionAction,javax.swing.text.DefaultEditorKit$DumpModelAction,javax.swing.text.DefaultEditorKit$PageAction,javax.swing.text.DefaultEditorKit$VerticalPageAction,javax.swing.text.DefaultEditorKit$BeepAction,javax.swing.text.DefaultEditorKit$PasteAction,javax.swing.text.DefaultEditorKit$CopyAction,javax.swing.text.DefaultEditorKit$CutAction,javax.swing.text.DefaultEditorKit$WritableAction,javax.swing.text.DefaultEditorKit$ReadOnlyAction,javax.swing.text.DefaultEditorKit$DeleteWordAction,javax.swing.text.DefaultEditorKit$DeleteNextCharAction,javax.swing.text.DefaultEditorKit$DeletePrevCharAction,javax.swing.text.DefaultEditorKit$InsertTabAction,javax.swing.text.DefaultEditorKit$InsertBreakAction,javax.swing.text.DefaultEditorKit$InsertContentAction,javax.swing.text.DefaultEditorKit$DefaultKeyTypedAction"
};

$Object* allocate$DefaultEditorKit($Class* clazz) {
	return $of($alloc(DefaultEditorKit));
}

$String* DefaultEditorKit::EndOfLineStringProperty = nullptr;
$String* DefaultEditorKit::insertContentAction = nullptr;
$String* DefaultEditorKit::insertBreakAction = nullptr;
$String* DefaultEditorKit::insertTabAction = nullptr;
$String* DefaultEditorKit::deletePrevCharAction = nullptr;
$String* DefaultEditorKit::deleteNextCharAction = nullptr;
$String* DefaultEditorKit::deleteNextWordAction = nullptr;
$String* DefaultEditorKit::deletePrevWordAction = nullptr;
$String* DefaultEditorKit::readOnlyAction = nullptr;
$String* DefaultEditorKit::writableAction = nullptr;
$String* DefaultEditorKit::cutAction = nullptr;
$String* DefaultEditorKit::copyAction = nullptr;
$String* DefaultEditorKit::pasteAction = nullptr;
$String* DefaultEditorKit::beepAction = nullptr;
$String* DefaultEditorKit::pageUpAction = nullptr;
$String* DefaultEditorKit::pageDownAction = nullptr;
$String* DefaultEditorKit::selectionPageUpAction = nullptr;
$String* DefaultEditorKit::selectionPageDownAction = nullptr;
$String* DefaultEditorKit::selectionPageLeftAction = nullptr;
$String* DefaultEditorKit::selectionPageRightAction = nullptr;
$String* DefaultEditorKit::forwardAction = nullptr;
$String* DefaultEditorKit::backwardAction = nullptr;
$String* DefaultEditorKit::selectionForwardAction = nullptr;
$String* DefaultEditorKit::selectionBackwardAction = nullptr;
$String* DefaultEditorKit::upAction = nullptr;
$String* DefaultEditorKit::downAction = nullptr;
$String* DefaultEditorKit::selectionUpAction = nullptr;
$String* DefaultEditorKit::selectionDownAction = nullptr;
$String* DefaultEditorKit::beginWordAction = nullptr;
$String* DefaultEditorKit::endWordAction = nullptr;
$String* DefaultEditorKit::selectionBeginWordAction = nullptr;
$String* DefaultEditorKit::selectionEndWordAction = nullptr;
$String* DefaultEditorKit::previousWordAction = nullptr;
$String* DefaultEditorKit::nextWordAction = nullptr;
$String* DefaultEditorKit::selectionPreviousWordAction = nullptr;
$String* DefaultEditorKit::selectionNextWordAction = nullptr;
$String* DefaultEditorKit::beginLineAction = nullptr;
$String* DefaultEditorKit::endLineAction = nullptr;
$String* DefaultEditorKit::selectionBeginLineAction = nullptr;
$String* DefaultEditorKit::selectionEndLineAction = nullptr;
$String* DefaultEditorKit::beginParagraphAction = nullptr;
$String* DefaultEditorKit::endParagraphAction = nullptr;
$String* DefaultEditorKit::selectionBeginParagraphAction = nullptr;
$String* DefaultEditorKit::selectionEndParagraphAction = nullptr;
$String* DefaultEditorKit::beginAction = nullptr;
$String* DefaultEditorKit::endAction = nullptr;
$String* DefaultEditorKit::selectionBeginAction = nullptr;
$String* DefaultEditorKit::selectionEndAction = nullptr;
$String* DefaultEditorKit::selectWordAction = nullptr;
$String* DefaultEditorKit::selectLineAction = nullptr;
$String* DefaultEditorKit::selectParagraphAction = nullptr;
$String* DefaultEditorKit::selectAllAction = nullptr;
$String* DefaultEditorKit::unselectAction = nullptr;
$String* DefaultEditorKit::toggleComponentOrientationAction = nullptr;
$String* DefaultEditorKit::defaultKeyTypedAction = nullptr;
$ActionArray* DefaultEditorKit::defaultActions = nullptr;

void DefaultEditorKit::init$() {
	$EditorKit::init$();
}

$String* DefaultEditorKit::getContentType() {
	return "text/plain"_s;
}

$ViewFactory* DefaultEditorKit::getViewFactory() {
	return nullptr;
}

$ActionArray* DefaultEditorKit::getActions() {
	return $cast($ActionArray, $nc(DefaultEditorKit::defaultActions)->clone());
}

$Caret* DefaultEditorKit::createCaret() {
	return nullptr;
}

$Document* DefaultEditorKit::createDefaultDocument() {
	return $new($PlainDocument);
}

void DefaultEditorKit::read($InputStream* in, $Document* doc, int32_t pos) {
	read(static_cast<$Reader*>($$new($InputStreamReader, in)), doc, pos);
}

void DefaultEditorKit::write($OutputStream* out, $Document* doc, int32_t pos, int32_t len) {
	$var($OutputStreamWriter, osw, $new($OutputStreamWriter, out));
	write(static_cast<$Writer*>(osw), doc, pos, len);
	osw->flush();
}

$MutableAttributeSet* DefaultEditorKit::getInputAttributes() {
	return nullptr;
}

void DefaultEditorKit::read($Reader* in, $Document* doc, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($chars, buff, $new($chars, 4096));
	int32_t nch = 0;
	bool lastWasCR = false;
	bool isCRLF = false;
	bool isCR = false;
	int32_t last = 0;
	bool wasEmpty = ($nc(doc)->getLength() == 0);
	$var($AttributeSet, attr, getInputAttributes());
	while ((nch = $nc(in)->read(buff, 0, buff->length)) != -1) {
		last = 0;
		for (int32_t counter = 0; counter < nch; ++counter) {
			switch (buff->get(counter)) {
			case u'\r':
				{
					if (lastWasCR) {
						isCR = true;
						if (counter == 0) {
							doc->insertString(pos, "\n"_s, attr);
							++pos;
						} else {
							buff->set(counter - 1, u'\n');
						}
					} else {
						lastWasCR = true;
					}
					break;
				}
			case u'\n':
				{
					if (lastWasCR) {
						if (counter > (last + 1)) {
							doc->insertString(pos, $$new($String, buff, last, counter - last - 1), attr);
							pos += (counter - last - 1);
						}
						lastWasCR = false;
						last = counter;
						isCRLF = true;
					}
					break;
				}
			default:
				{
					if (lastWasCR) {
						isCR = true;
						if (counter == 0) {
							doc->insertString(pos, "\n"_s, attr);
							++pos;
						} else {
							buff->set(counter - 1, u'\n');
						}
						lastWasCR = false;
					}
					break;
				}
			}
		}
		if (last < nch) {
			if (lastWasCR) {
				if (last < (nch - 1)) {
					doc->insertString(pos, $$new($String, buff, last, nch - last - 1), attr);
					pos += (nch - last - 1);
				}
			} else {
				doc->insertString(pos, $$new($String, buff, last, nch - last), attr);
				pos += (nch - last);
			}
		}
	}
	if (lastWasCR) {
		doc->insertString(pos, "\n"_s, attr);
		isCR = true;
	}
	if (wasEmpty) {
		if (isCRLF) {
			doc->putProperty(DefaultEditorKit::EndOfLineStringProperty, "\r\n"_s);
		} else if (isCR) {
			doc->putProperty(DefaultEditorKit::EndOfLineStringProperty, "\r"_s);
		} else {
			doc->putProperty(DefaultEditorKit::EndOfLineStringProperty, "\n"_s);
		}
	}
}

void DefaultEditorKit::write($Writer* out, $Document* doc, int32_t pos, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if ((pos < 0) || ((pos + len) > $nc(doc)->getLength())) {
		$throwNew($BadLocationException, "DefaultEditorKit.write"_s, pos);
	}
	$var($Segment, data, $new($Segment));
	int32_t nleft = len;
	int32_t offs = pos;
	$var($Object, endOfLineProperty, $nc(doc)->getProperty(DefaultEditorKit::EndOfLineStringProperty));
	if (endOfLineProperty == nullptr) {
		$assign(endOfLineProperty, $System::lineSeparator());
	}
	$var($String, endOfLine, nullptr);
	if ($instanceOf($String, endOfLineProperty)) {
		$assign(endOfLine, $cast($String, endOfLineProperty));
	} else {
		$assign(endOfLine, nullptr);
	}
	if (endOfLineProperty != nullptr && !$nc(endOfLine)->equals("\n"_s)) {
		while (nleft > 0) {
			int32_t n = $Math::min(nleft, 4096);
			doc->getText(offs, n, data);
			int32_t last = data->offset;
			$var($chars, array, data->array);
			int32_t maxCounter = last + data->count;
			for (int32_t counter = last; counter < maxCounter; ++counter) {
				if ($nc(array)->get(counter) == u'\n') {
					if (counter > last) {
						$nc(out)->write(array, last, counter - last);
					}
					$nc(out)->write(endOfLine);
					last = counter + 1;
				}
			}
			if (maxCounter > last) {
				$nc(out)->write(array, last, maxCounter - last);
			}
			offs += n;
			nleft -= n;
		}
	} else {
		while (nleft > 0) {
			int32_t n = $Math::min(nleft, 4096);
			doc->getText(offs, n, data);
			$nc(out)->write(data->array, data->offset, data->count);
			offs += n;
			nleft -= n;
		}
	}
	$nc(out)->flush();
}

void clinit$DefaultEditorKit($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(DefaultEditorKit::EndOfLineStringProperty, "__EndOfLine__"_s);
	$assignStatic(DefaultEditorKit::insertContentAction, "insert-content"_s);
	$assignStatic(DefaultEditorKit::insertBreakAction, "insert-break"_s);
	$assignStatic(DefaultEditorKit::insertTabAction, "insert-tab"_s);
	$assignStatic(DefaultEditorKit::deletePrevCharAction, "delete-previous"_s);
	$assignStatic(DefaultEditorKit::deleteNextCharAction, "delete-next"_s);
	$assignStatic(DefaultEditorKit::deleteNextWordAction, "delete-next-word"_s);
	$assignStatic(DefaultEditorKit::deletePrevWordAction, "delete-previous-word"_s);
	$assignStatic(DefaultEditorKit::readOnlyAction, "set-read-only"_s);
	$assignStatic(DefaultEditorKit::writableAction, "set-writable"_s);
	$assignStatic(DefaultEditorKit::cutAction, "cut-to-clipboard"_s);
	$assignStatic(DefaultEditorKit::copyAction, "copy-to-clipboard"_s);
	$assignStatic(DefaultEditorKit::pasteAction, "paste-from-clipboard"_s);
	$assignStatic(DefaultEditorKit::beepAction, "beep"_s);
	$assignStatic(DefaultEditorKit::pageUpAction, "page-up"_s);
	$assignStatic(DefaultEditorKit::pageDownAction, "page-down"_s);
	$assignStatic(DefaultEditorKit::selectionPageUpAction, "selection-page-up"_s);
	$assignStatic(DefaultEditorKit::selectionPageDownAction, "selection-page-down"_s);
	$assignStatic(DefaultEditorKit::selectionPageLeftAction, "selection-page-left"_s);
	$assignStatic(DefaultEditorKit::selectionPageRightAction, "selection-page-right"_s);
	$assignStatic(DefaultEditorKit::forwardAction, "caret-forward"_s);
	$assignStatic(DefaultEditorKit::backwardAction, "caret-backward"_s);
	$assignStatic(DefaultEditorKit::selectionForwardAction, "selection-forward"_s);
	$assignStatic(DefaultEditorKit::selectionBackwardAction, "selection-backward"_s);
	$assignStatic(DefaultEditorKit::upAction, "caret-up"_s);
	$assignStatic(DefaultEditorKit::downAction, "caret-down"_s);
	$assignStatic(DefaultEditorKit::selectionUpAction, "selection-up"_s);
	$assignStatic(DefaultEditorKit::selectionDownAction, "selection-down"_s);
	$assignStatic(DefaultEditorKit::beginWordAction, "caret-begin-word"_s);
	$assignStatic(DefaultEditorKit::endWordAction, "caret-end-word"_s);
	$assignStatic(DefaultEditorKit::selectionBeginWordAction, "selection-begin-word"_s);
	$assignStatic(DefaultEditorKit::selectionEndWordAction, "selection-end-word"_s);
	$assignStatic(DefaultEditorKit::previousWordAction, "caret-previous-word"_s);
	$assignStatic(DefaultEditorKit::nextWordAction, "caret-next-word"_s);
	$assignStatic(DefaultEditorKit::selectionPreviousWordAction, "selection-previous-word"_s);
	$assignStatic(DefaultEditorKit::selectionNextWordAction, "selection-next-word"_s);
	$assignStatic(DefaultEditorKit::beginLineAction, "caret-begin-line"_s);
	$assignStatic(DefaultEditorKit::endLineAction, "caret-end-line"_s);
	$assignStatic(DefaultEditorKit::selectionBeginLineAction, "selection-begin-line"_s);
	$assignStatic(DefaultEditorKit::selectionEndLineAction, "selection-end-line"_s);
	$assignStatic(DefaultEditorKit::beginParagraphAction, "caret-begin-paragraph"_s);
	$assignStatic(DefaultEditorKit::endParagraphAction, "caret-end-paragraph"_s);
	$assignStatic(DefaultEditorKit::selectionBeginParagraphAction, "selection-begin-paragraph"_s);
	$assignStatic(DefaultEditorKit::selectionEndParagraphAction, "selection-end-paragraph"_s);
	$assignStatic(DefaultEditorKit::beginAction, "caret-begin"_s);
	$assignStatic(DefaultEditorKit::endAction, "caret-end"_s);
	$assignStatic(DefaultEditorKit::selectionBeginAction, "selection-begin"_s);
	$assignStatic(DefaultEditorKit::selectionEndAction, "selection-end"_s);
	$assignStatic(DefaultEditorKit::selectWordAction, "select-word"_s);
	$assignStatic(DefaultEditorKit::selectLineAction, "select-line"_s);
	$assignStatic(DefaultEditorKit::selectParagraphAction, "select-paragraph"_s);
	$assignStatic(DefaultEditorKit::selectAllAction, "select-all"_s);
	$assignStatic(DefaultEditorKit::unselectAction, "unselect"_s);
	$assignStatic(DefaultEditorKit::toggleComponentOrientationAction, "toggle-componentOrientation"_s);
	$assignStatic(DefaultEditorKit::defaultKeyTypedAction, "default-typed"_s);
	$assignStatic(DefaultEditorKit::defaultActions, $new($ActionArray, {
		static_cast<$Action*>($$new($DefaultEditorKit$InsertContentAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$DeletePrevCharAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$DeleteNextCharAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$ReadOnlyAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$DeleteWordAction, DefaultEditorKit::deletePrevWordAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$DeleteWordAction, DefaultEditorKit::deleteNextWordAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$WritableAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$CutAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$CopyAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$PasteAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$VerticalPageAction, DefaultEditorKit::pageUpAction, -1, false)),
		static_cast<$Action*>($$new($DefaultEditorKit$VerticalPageAction, DefaultEditorKit::pageDownAction, 1, false)),
		static_cast<$Action*>($$new($DefaultEditorKit$VerticalPageAction, DefaultEditorKit::selectionPageUpAction, -1, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$VerticalPageAction, DefaultEditorKit::selectionPageDownAction, 1, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$PageAction, DefaultEditorKit::selectionPageLeftAction, true, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$PageAction, DefaultEditorKit::selectionPageRightAction, false, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$InsertBreakAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$BeepAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$NextVisualPositionAction, DefaultEditorKit::forwardAction, false, $SwingConstants::EAST)),
		static_cast<$Action*>($$new($DefaultEditorKit$NextVisualPositionAction, DefaultEditorKit::backwardAction, false, $SwingConstants::WEST)),
		static_cast<$Action*>($$new($DefaultEditorKit$NextVisualPositionAction, DefaultEditorKit::selectionForwardAction, true, $SwingConstants::EAST)),
		static_cast<$Action*>($$new($DefaultEditorKit$NextVisualPositionAction, DefaultEditorKit::selectionBackwardAction, true, $SwingConstants::WEST)),
		static_cast<$Action*>($$new($DefaultEditorKit$NextVisualPositionAction, DefaultEditorKit::upAction, false, $SwingConstants::NORTH)),
		static_cast<$Action*>($$new($DefaultEditorKit$NextVisualPositionAction, DefaultEditorKit::downAction, false, $SwingConstants::SOUTH)),
		static_cast<$Action*>($$new($DefaultEditorKit$NextVisualPositionAction, DefaultEditorKit::selectionUpAction, true, $SwingConstants::NORTH)),
		static_cast<$Action*>($$new($DefaultEditorKit$NextVisualPositionAction, DefaultEditorKit::selectionDownAction, true, $SwingConstants::SOUTH)),
		static_cast<$Action*>($$new($DefaultEditorKit$BeginWordAction, DefaultEditorKit::beginWordAction, false)),
		static_cast<$Action*>($$new($DefaultEditorKit$EndWordAction, DefaultEditorKit::endWordAction, false)),
		static_cast<$Action*>($$new($DefaultEditorKit$BeginWordAction, DefaultEditorKit::selectionBeginWordAction, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$EndWordAction, DefaultEditorKit::selectionEndWordAction, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$PreviousWordAction, DefaultEditorKit::previousWordAction, false)),
		static_cast<$Action*>($$new($DefaultEditorKit$NextWordAction, DefaultEditorKit::nextWordAction, false)),
		static_cast<$Action*>($$new($DefaultEditorKit$PreviousWordAction, DefaultEditorKit::selectionPreviousWordAction, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$NextWordAction, DefaultEditorKit::selectionNextWordAction, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$BeginLineAction, DefaultEditorKit::beginLineAction, false)),
		static_cast<$Action*>($$new($DefaultEditorKit$EndLineAction, DefaultEditorKit::endLineAction, false)),
		static_cast<$Action*>($$new($DefaultEditorKit$BeginLineAction, DefaultEditorKit::selectionBeginLineAction, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$EndLineAction, DefaultEditorKit::selectionEndLineAction, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$BeginParagraphAction, DefaultEditorKit::beginParagraphAction, false)),
		static_cast<$Action*>($$new($DefaultEditorKit$EndParagraphAction, DefaultEditorKit::endParagraphAction, false)),
		static_cast<$Action*>($$new($DefaultEditorKit$BeginParagraphAction, DefaultEditorKit::selectionBeginParagraphAction, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$EndParagraphAction, DefaultEditorKit::selectionEndParagraphAction, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$BeginAction, DefaultEditorKit::beginAction, false)),
		static_cast<$Action*>($$new($DefaultEditorKit$EndAction, DefaultEditorKit::endAction, false)),
		static_cast<$Action*>($$new($DefaultEditorKit$BeginAction, DefaultEditorKit::selectionBeginAction, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$EndAction, DefaultEditorKit::selectionEndAction, true)),
		static_cast<$Action*>($$new($DefaultEditorKit$DefaultKeyTypedAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$InsertTabAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$SelectWordAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$SelectLineAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$SelectParagraphAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$SelectAllAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$UnselectAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$ToggleComponentOrientationAction)),
		static_cast<$Action*>($$new($DefaultEditorKit$DumpModelAction))
	}));
}

DefaultEditorKit::DefaultEditorKit() {
}

$Class* DefaultEditorKit::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit, name, initialize, &_DefaultEditorKit_ClassInfo_, clinit$DefaultEditorKit, allocate$DefaultEditorKit);
	return class$;
}

$Class* DefaultEditorKit::class$ = nullptr;

		} // text
	} // swing
} // javax