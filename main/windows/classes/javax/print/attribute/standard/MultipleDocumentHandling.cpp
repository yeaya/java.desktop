#include <javax/print/attribute/standard/MultipleDocumentHandling.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef SEPARATE_DOCUMENTS_COLLATED_COPIES
#undef SEPARATE_DOCUMENTS_UNCOLLATED_COPIES
#undef SINGLE_DOCUMENT
#undef SINGLE_DOCUMENT_NEW_SHEET

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $MultipleDocumentHandlingArray = $Array<::javax::print::attribute::standard::MultipleDocumentHandling>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _MultipleDocumentHandling_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MultipleDocumentHandling, serialVersionUID)},
	{"SINGLE_DOCUMENT", "Ljavax/print/attribute/standard/MultipleDocumentHandling;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MultipleDocumentHandling, SINGLE_DOCUMENT)},
	{"SEPARATE_DOCUMENTS_UNCOLLATED_COPIES", "Ljavax/print/attribute/standard/MultipleDocumentHandling;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MultipleDocumentHandling, SEPARATE_DOCUMENTS_UNCOLLATED_COPIES)},
	{"SEPARATE_DOCUMENTS_COLLATED_COPIES", "Ljavax/print/attribute/standard/MultipleDocumentHandling;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MultipleDocumentHandling, SEPARATE_DOCUMENTS_COLLATED_COPIES)},
	{"SINGLE_DOCUMENT_NEW_SHEET", "Ljavax/print/attribute/standard/MultipleDocumentHandling;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MultipleDocumentHandling, SINGLE_DOCUMENT_NEW_SHEET)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MultipleDocumentHandling, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/MultipleDocumentHandling;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MultipleDocumentHandling, myEnumValueTable)},
	{}
};

$MethodInfo _MultipleDocumentHandling_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(MultipleDocumentHandling::*)(int32_t)>(&MultipleDocumentHandling::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultipleDocumentHandling_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.MultipleDocumentHandling",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_MultipleDocumentHandling_FieldInfo_,
	_MultipleDocumentHandling_MethodInfo_
};

$Object* allocate$MultipleDocumentHandling($Class* clazz) {
	return $of($alloc(MultipleDocumentHandling));
}

$Object* MultipleDocumentHandling::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t MultipleDocumentHandling::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* MultipleDocumentHandling::toString() {
	 return this->$EnumSyntax::toString();
}

bool MultipleDocumentHandling::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void MultipleDocumentHandling::finalize() {
	this->$EnumSyntax::finalize();
}

MultipleDocumentHandling* MultipleDocumentHandling::SINGLE_DOCUMENT = nullptr;
MultipleDocumentHandling* MultipleDocumentHandling::SEPARATE_DOCUMENTS_UNCOLLATED_COPIES = nullptr;
MultipleDocumentHandling* MultipleDocumentHandling::SEPARATE_DOCUMENTS_COLLATED_COPIES = nullptr;
MultipleDocumentHandling* MultipleDocumentHandling::SINGLE_DOCUMENT_NEW_SHEET = nullptr;
$StringArray* MultipleDocumentHandling::myStringTable = nullptr;
$MultipleDocumentHandlingArray* MultipleDocumentHandling::myEnumValueTable = nullptr;

void MultipleDocumentHandling::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* MultipleDocumentHandling::getStringTable() {
	return $cast($StringArray, $nc(MultipleDocumentHandling::myStringTable)->clone());
}

$EnumSyntaxArray* MultipleDocumentHandling::getEnumValueTable() {
	return $cast($EnumSyntaxArray, $nc(MultipleDocumentHandling::myEnumValueTable)->clone());
}

$Class* MultipleDocumentHandling::getCategory() {
	return MultipleDocumentHandling::class$;
}

$String* MultipleDocumentHandling::getName() {
	return "multiple-document-handling"_s;
}

void clinit$MultipleDocumentHandling($Class* class$) {
	$assignStatic(MultipleDocumentHandling::SINGLE_DOCUMENT, $new(MultipleDocumentHandling, 0));
	$assignStatic(MultipleDocumentHandling::SEPARATE_DOCUMENTS_UNCOLLATED_COPIES, $new(MultipleDocumentHandling, 1));
	$assignStatic(MultipleDocumentHandling::SEPARATE_DOCUMENTS_COLLATED_COPIES, $new(MultipleDocumentHandling, 2));
	$assignStatic(MultipleDocumentHandling::SINGLE_DOCUMENT_NEW_SHEET, $new(MultipleDocumentHandling, 3));
	$assignStatic(MultipleDocumentHandling::myStringTable, $new($StringArray, {
		"single-document"_s,
		"separate-documents-uncollated-copies"_s,
		"separate-documents-collated-copies"_s,
		"single-document-new-sheet"_s
	}));
	$assignStatic(MultipleDocumentHandling::myEnumValueTable, $new($MultipleDocumentHandlingArray, {
		MultipleDocumentHandling::SINGLE_DOCUMENT,
		MultipleDocumentHandling::SEPARATE_DOCUMENTS_UNCOLLATED_COPIES,
		MultipleDocumentHandling::SEPARATE_DOCUMENTS_COLLATED_COPIES,
		MultipleDocumentHandling::SINGLE_DOCUMENT_NEW_SHEET
	}));
}

MultipleDocumentHandling::MultipleDocumentHandling() {
}

$Class* MultipleDocumentHandling::load$($String* name, bool initialize) {
	$loadClass(MultipleDocumentHandling, name, initialize, &_MultipleDocumentHandling_ClassInfo_, clinit$MultipleDocumentHandling, allocate$MultipleDocumentHandling);
	return class$;
}

$Class* MultipleDocumentHandling::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax