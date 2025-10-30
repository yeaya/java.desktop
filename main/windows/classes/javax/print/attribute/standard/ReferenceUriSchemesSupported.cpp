#include <javax/print/attribute/standard/ReferenceUriSchemesSupported.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef FILE
#undef FTP
#undef GOPHER
#undef HTTP
#undef HTTPS
#undef NEWS
#undef NNTP
#undef WAIS

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $ReferenceUriSchemesSupportedArray = $Array<::javax::print::attribute::standard::ReferenceUriSchemesSupported>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _ReferenceUriSchemesSupported_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReferenceUriSchemesSupported, serialVersionUID)},
	{"FTP", "Ljavax/print/attribute/standard/ReferenceUriSchemesSupported;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReferenceUriSchemesSupported, FTP)},
	{"HTTP", "Ljavax/print/attribute/standard/ReferenceUriSchemesSupported;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReferenceUriSchemesSupported, HTTP)},
	{"HTTPS", "Ljavax/print/attribute/standard/ReferenceUriSchemesSupported;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReferenceUriSchemesSupported, HTTPS)},
	{"GOPHER", "Ljavax/print/attribute/standard/ReferenceUriSchemesSupported;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReferenceUriSchemesSupported, GOPHER)},
	{"NEWS", "Ljavax/print/attribute/standard/ReferenceUriSchemesSupported;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReferenceUriSchemesSupported, NEWS)},
	{"NNTP", "Ljavax/print/attribute/standard/ReferenceUriSchemesSupported;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReferenceUriSchemesSupported, NNTP)},
	{"WAIS", "Ljavax/print/attribute/standard/ReferenceUriSchemesSupported;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReferenceUriSchemesSupported, WAIS)},
	{"FILE", "Ljavax/print/attribute/standard/ReferenceUriSchemesSupported;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReferenceUriSchemesSupported, FILE)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ReferenceUriSchemesSupported, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/ReferenceUriSchemesSupported;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ReferenceUriSchemesSupported, myEnumValueTable)},
	{}
};

$MethodInfo _ReferenceUriSchemesSupported_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(ReferenceUriSchemesSupported::*)(int32_t)>(&ReferenceUriSchemesSupported::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ReferenceUriSchemesSupported_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.ReferenceUriSchemesSupported",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.Attribute",
	_ReferenceUriSchemesSupported_FieldInfo_,
	_ReferenceUriSchemesSupported_MethodInfo_
};

$Object* allocate$ReferenceUriSchemesSupported($Class* clazz) {
	return $of($alloc(ReferenceUriSchemesSupported));
}

$Object* ReferenceUriSchemesSupported::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t ReferenceUriSchemesSupported::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* ReferenceUriSchemesSupported::toString() {
	 return this->$EnumSyntax::toString();
}

bool ReferenceUriSchemesSupported::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void ReferenceUriSchemesSupported::finalize() {
	this->$EnumSyntax::finalize();
}

ReferenceUriSchemesSupported* ReferenceUriSchemesSupported::FTP = nullptr;
ReferenceUriSchemesSupported* ReferenceUriSchemesSupported::HTTP = nullptr;
ReferenceUriSchemesSupported* ReferenceUriSchemesSupported::HTTPS = nullptr;
ReferenceUriSchemesSupported* ReferenceUriSchemesSupported::GOPHER = nullptr;
ReferenceUriSchemesSupported* ReferenceUriSchemesSupported::NEWS = nullptr;
ReferenceUriSchemesSupported* ReferenceUriSchemesSupported::NNTP = nullptr;
ReferenceUriSchemesSupported* ReferenceUriSchemesSupported::WAIS = nullptr;
ReferenceUriSchemesSupported* ReferenceUriSchemesSupported::FILE = nullptr;
$StringArray* ReferenceUriSchemesSupported::myStringTable = nullptr;
$ReferenceUriSchemesSupportedArray* ReferenceUriSchemesSupported::myEnumValueTable = nullptr;

void ReferenceUriSchemesSupported::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* ReferenceUriSchemesSupported::getStringTable() {
	return $cast($StringArray, $nc(ReferenceUriSchemesSupported::myStringTable)->clone());
}

$EnumSyntaxArray* ReferenceUriSchemesSupported::getEnumValueTable() {
	return $cast($EnumSyntaxArray, $nc(ReferenceUriSchemesSupported::myEnumValueTable)->clone());
}

$Class* ReferenceUriSchemesSupported::getCategory() {
	return ReferenceUriSchemesSupported::class$;
}

$String* ReferenceUriSchemesSupported::getName() {
	return "reference-uri-schemes-supported"_s;
}

void clinit$ReferenceUriSchemesSupported($Class* class$) {
	$assignStatic(ReferenceUriSchemesSupported::FTP, $new(ReferenceUriSchemesSupported, 0));
	$assignStatic(ReferenceUriSchemesSupported::HTTP, $new(ReferenceUriSchemesSupported, 1));
	$assignStatic(ReferenceUriSchemesSupported::HTTPS, $new(ReferenceUriSchemesSupported, 2));
	$assignStatic(ReferenceUriSchemesSupported::GOPHER, $new(ReferenceUriSchemesSupported, 3));
	$assignStatic(ReferenceUriSchemesSupported::NEWS, $new(ReferenceUriSchemesSupported, 4));
	$assignStatic(ReferenceUriSchemesSupported::NNTP, $new(ReferenceUriSchemesSupported, 5));
	$assignStatic(ReferenceUriSchemesSupported::WAIS, $new(ReferenceUriSchemesSupported, 6));
	$assignStatic(ReferenceUriSchemesSupported::FILE, $new(ReferenceUriSchemesSupported, 7));
	$assignStatic(ReferenceUriSchemesSupported::myStringTable, $new($StringArray, {
		"ftp"_s,
		"http"_s,
		"https"_s,
		"gopher"_s,
		"news"_s,
		"nntp"_s,
		"wais"_s,
		"file"_s
	}));
	$assignStatic(ReferenceUriSchemesSupported::myEnumValueTable, $new($ReferenceUriSchemesSupportedArray, {
		ReferenceUriSchemesSupported::FTP,
		ReferenceUriSchemesSupported::HTTP,
		ReferenceUriSchemesSupported::HTTPS,
		ReferenceUriSchemesSupported::GOPHER,
		ReferenceUriSchemesSupported::NEWS,
		ReferenceUriSchemesSupported::NNTP,
		ReferenceUriSchemesSupported::WAIS,
		ReferenceUriSchemesSupported::FILE
	}));
}

ReferenceUriSchemesSupported::ReferenceUriSchemesSupported() {
}

$Class* ReferenceUriSchemesSupported::load$($String* name, bool initialize) {
	$loadClass(ReferenceUriSchemesSupported, name, initialize, &_ReferenceUriSchemesSupported_ClassInfo_, clinit$ReferenceUriSchemesSupported, allocate$ReferenceUriSchemesSupported);
	return class$;
}

$Class* ReferenceUriSchemesSupported::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax