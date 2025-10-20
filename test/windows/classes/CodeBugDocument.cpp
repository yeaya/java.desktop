#include <CodeBugDocument.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultStyledDocument$ElementSpec.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <jcpp.h>

#undef ELEMENT_TABLE
#undef ELEMENT_TD
#undef ELEMENT_TR

using $DefaultStyledDocument$ElementSpecArray = $Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $DefaultStyledDocument$ElementSpec = ::javax::swing::text::DefaultStyledDocument$ElementSpec;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;

$FieldInfo _CodeBugDocument_FieldInfo_[] = {
	{"ELEMENT_TABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CodeBugDocument, ELEMENT_TABLE)},
	{"ELEMENT_TR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CodeBugDocument, ELEMENT_TR)},
	{"ELEMENT_TD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CodeBugDocument, ELEMENT_TD)},
	{}
};

$MethodInfo _CodeBugDocument_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CodeBugDocument::*)()>(&CodeBugDocument::init$))},
	{"fillCellSpecs", "(Ljava/util/ArrayList;I)V", nullptr, $PROTECTED},
	{"fillRowSpecs", "(Ljava/util/ArrayList;II)V", nullptr, $PROTECTED},
	{"insertTable", "(III)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _CodeBugDocument_ClassInfo_ = {
	$ACC_SUPER,
	"CodeBugDocument",
	"javax.swing.text.DefaultStyledDocument",
	nullptr,
	_CodeBugDocument_FieldInfo_,
	_CodeBugDocument_MethodInfo_
};

$Object* allocate$CodeBugDocument($Class* clazz) {
	return $of($alloc(CodeBugDocument));
}

$String* CodeBugDocument::ELEMENT_TABLE = nullptr;
$String* CodeBugDocument::ELEMENT_TR = nullptr;
$String* CodeBugDocument::ELEMENT_TD = nullptr;

void CodeBugDocument::init$() {
	$DefaultStyledDocument::init$();
}

void CodeBugDocument::insertTable(int32_t offset, int32_t rowCount, int32_t colCount) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ArrayList, Specs, $new($ArrayList));
		$var($AttributeSet, var$0, static_cast<$AttributeSet*>($new($SimpleAttributeSet)));
		$var($DefaultStyledDocument$ElementSpec, gapTag, $new($DefaultStyledDocument$ElementSpec, var$0, $DefaultStyledDocument$ElementSpec::ContentType, $("\n"_s->toCharArray()), 0, 1));
		Specs->add(gapTag);
		$var($SimpleAttributeSet, tableAttrs, $new($SimpleAttributeSet));
		$init($AbstractDocument);
		tableAttrs->addAttribute($AbstractDocument::ElementNameAttribute, CodeBugDocument::ELEMENT_TABLE);
		$var($DefaultStyledDocument$ElementSpec, tableStart, $new($DefaultStyledDocument$ElementSpec, tableAttrs, $DefaultStyledDocument$ElementSpec::StartTagType));
		Specs->add(tableStart);
		fillRowSpecs(Specs, rowCount, colCount);
		$var($DefaultStyledDocument$ElementSpecArray, spec, $new($DefaultStyledDocument$ElementSpecArray, Specs->size()));
		Specs->toArray(spec);
		this->insert(offset, spec);
	} catch ($BadLocationException&) {
		$catch();
	}
}

void CodeBugDocument::fillRowSpecs($ArrayList* Specs, int32_t rowCount, int32_t colCount) {
	$useLocalCurrentObjectStackCache();
	$var($SimpleAttributeSet, rowAttrs, $new($SimpleAttributeSet));
	$init($AbstractDocument);
	rowAttrs->addAttribute($AbstractDocument::ElementNameAttribute, CodeBugDocument::ELEMENT_TR);
	for (int32_t i = 0; i < rowCount; ++i) {
		$var($DefaultStyledDocument$ElementSpec, rowStart, $new($DefaultStyledDocument$ElementSpec, rowAttrs, $DefaultStyledDocument$ElementSpec::StartTagType));
		$nc(Specs)->add(rowStart);
		fillCellSpecs(Specs, colCount);
		$var($DefaultStyledDocument$ElementSpec, rowEnd, $new($DefaultStyledDocument$ElementSpec, rowAttrs, $DefaultStyledDocument$ElementSpec::EndTagType));
		Specs->add(rowEnd);
	}
}

void CodeBugDocument::fillCellSpecs($ArrayList* Specs, int32_t colCount) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < colCount; ++i) {
		$var($SimpleAttributeSet, cellAttrs, $new($SimpleAttributeSet));
		$init($AbstractDocument);
		cellAttrs->addAttribute($AbstractDocument::ElementNameAttribute, CodeBugDocument::ELEMENT_TD);
		$var($DefaultStyledDocument$ElementSpec, cellStart, $new($DefaultStyledDocument$ElementSpec, cellAttrs, $DefaultStyledDocument$ElementSpec::StartTagType));
		$nc(Specs)->add(cellStart);
		$var($DefaultStyledDocument$ElementSpec, parStart, $new($DefaultStyledDocument$ElementSpec, $$new($SimpleAttributeSet), $DefaultStyledDocument$ElementSpec::StartTagType));
		Specs->add(parStart);
		$var($AttributeSet, var$0, static_cast<$AttributeSet*>($new($SimpleAttributeSet)));
		$var($DefaultStyledDocument$ElementSpec, parContent, $new($DefaultStyledDocument$ElementSpec, var$0, $DefaultStyledDocument$ElementSpec::ContentType, $("\n"_s->toCharArray()), 0, 1));
		Specs->add(parContent);
		$var($DefaultStyledDocument$ElementSpec, parEnd, $new($DefaultStyledDocument$ElementSpec, $$new($SimpleAttributeSet), $DefaultStyledDocument$ElementSpec::EndTagType));
		Specs->add(parEnd);
		$var($DefaultStyledDocument$ElementSpec, cellEnd, $new($DefaultStyledDocument$ElementSpec, cellAttrs, $DefaultStyledDocument$ElementSpec::EndTagType));
		Specs->add(cellEnd);
	}
}

CodeBugDocument::CodeBugDocument() {
}

void clinit$CodeBugDocument($Class* class$) {
	$assignStatic(CodeBugDocument::ELEMENT_TABLE, "table"_s);
	$assignStatic(CodeBugDocument::ELEMENT_TR, "table cells row"_s);
	$assignStatic(CodeBugDocument::ELEMENT_TD, "table data cell"_s);
}

$Class* CodeBugDocument::load$($String* name, bool initialize) {
	$loadClass(CodeBugDocument, name, initialize, &_CodeBugDocument_ClassInfo_, clinit$CodeBugDocument, allocate$CodeBugDocument);
	return class$;
}

$Class* CodeBugDocument::class$ = nullptr;