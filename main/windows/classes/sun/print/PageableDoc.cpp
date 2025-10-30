#include <sun/print/PageableDoc.h>

#include <java/awt/print/Pageable.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <javax/print/DocFlavor$SERVICE_FORMATTED.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/attribute/DocAttributeSet.h>
#include <javax/print/attribute/HashDocAttributeSet.h>
#include <jcpp.h>

#undef PAGEABLE

using $Pageable = ::java::awt::print::Pageable;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Doc = ::javax::print::Doc;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocFlavor$SERVICE_FORMATTED = ::javax::print::DocFlavor$SERVICE_FORMATTED;
using $DocAttributeSet = ::javax::print::attribute::DocAttributeSet;
using $HashDocAttributeSet = ::javax::print::attribute::HashDocAttributeSet;

namespace sun {
	namespace print {

$FieldInfo _PageableDoc_FieldInfo_[] = {
	{"pageable", "Ljava/awt/print/Pageable;", nullptr, $PRIVATE, $field(PageableDoc, pageable)},
	{}
};

$MethodInfo _PageableDoc_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/print/Pageable;)V", nullptr, $PUBLIC, $method(static_cast<void(PageableDoc::*)($Pageable*)>(&PageableDoc::init$))},
	{"getAttributes", "()Ljavax/print/attribute/DocAttributeSet;", nullptr, $PUBLIC},
	{"getDocFlavor", "()Ljavax/print/DocFlavor;", nullptr, $PUBLIC},
	{"getPrintData", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getReaderForText", "()Ljava/io/Reader;", nullptr, $PUBLIC, nullptr, "java.io.UnsupportedEncodingException,java.io.IOException"},
	{"getStreamForBytes", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _PageableDoc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PageableDoc",
	"java.lang.Object",
	"javax.print.Doc",
	_PageableDoc_FieldInfo_,
	_PageableDoc_MethodInfo_
};

$Object* allocate$PageableDoc($Class* clazz) {
	return $of($alloc(PageableDoc));
}

void PageableDoc::init$($Pageable* pageable) {
	$set(this, pageable, pageable);
}

$DocFlavor* PageableDoc::getDocFlavor() {
	$init($DocFlavor$SERVICE_FORMATTED);
	return $DocFlavor$SERVICE_FORMATTED::PAGEABLE;
}

$DocAttributeSet* PageableDoc::getAttributes() {
	return $new($HashDocAttributeSet);
}

$Object* PageableDoc::getPrintData() {
	return $of(this->pageable);
}

$Reader* PageableDoc::getReaderForText() {
	return nullptr;
}

$InputStream* PageableDoc::getStreamForBytes() {
	return nullptr;
}

PageableDoc::PageableDoc() {
}

$Class* PageableDoc::load$($String* name, bool initialize) {
	$loadClass(PageableDoc, name, initialize, &_PageableDoc_ClassInfo_, allocate$PageableDoc);
	return class$;
}

$Class* PageableDoc::class$ = nullptr;

	} // print
} // sun