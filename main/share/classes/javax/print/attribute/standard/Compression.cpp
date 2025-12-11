#include <javax/print/attribute/standard/Compression.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef COMPRESS
#undef DEFLATE
#undef GZIP
#undef NONE

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $CompressionArray = $Array<::javax::print::attribute::standard::Compression>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _Compression_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Compression, serialVersionUID)},
	{"NONE", "Ljavax/print/attribute/standard/Compression;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Compression, NONE)},
	{"DEFLATE", "Ljavax/print/attribute/standard/Compression;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Compression, DEFLATE)},
	{"GZIP", "Ljavax/print/attribute/standard/Compression;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Compression, GZIP)},
	{"COMPRESS", "Ljavax/print/attribute/standard/Compression;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Compression, COMPRESS)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Compression, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/Compression;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Compression, myEnumValueTable)},
	{}
};

$MethodInfo _Compression_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(Compression::*)(int32_t)>(&Compression::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Compression_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.Compression",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.DocAttribute",
	_Compression_FieldInfo_,
	_Compression_MethodInfo_
};

$Object* allocate$Compression($Class* clazz) {
	return $of($alloc(Compression));
}

$Object* Compression::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t Compression::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* Compression::toString() {
	 return this->$EnumSyntax::toString();
}

bool Compression::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void Compression::finalize() {
	this->$EnumSyntax::finalize();
}

Compression* Compression::NONE = nullptr;
Compression* Compression::DEFLATE = nullptr;
Compression* Compression::GZIP = nullptr;
Compression* Compression::COMPRESS = nullptr;
$StringArray* Compression::myStringTable = nullptr;
$CompressionArray* Compression::myEnumValueTable = nullptr;

void Compression::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* Compression::getStringTable() {
	return $cast($StringArray, $nc(Compression::myStringTable)->clone());
}

$EnumSyntaxArray* Compression::getEnumValueTable() {
	return $cast($EnumSyntaxArray, $nc(Compression::myEnumValueTable)->clone());
}

$Class* Compression::getCategory() {
	return Compression::class$;
}

$String* Compression::getName() {
	return "compression"_s;
}

void clinit$Compression($Class* class$) {
	$assignStatic(Compression::NONE, $new(Compression, 0));
	$assignStatic(Compression::DEFLATE, $new(Compression, 1));
	$assignStatic(Compression::GZIP, $new(Compression, 2));
	$assignStatic(Compression::COMPRESS, $new(Compression, 3));
	$assignStatic(Compression::myStringTable, $new($StringArray, {
		"none"_s,
		"deflate"_s,
		"gzip"_s,
		"compress"_s
	}));
	$assignStatic(Compression::myEnumValueTable, $new($CompressionArray, {
		Compression::NONE,
		Compression::DEFLATE,
		Compression::GZIP,
		Compression::COMPRESS
	}));
}

Compression::Compression() {
}

$Class* Compression::load$($String* name, bool initialize) {
	$loadClass(Compression, name, initialize, &_Compression_ClassInfo_, clinit$Compression, allocate$Compression);
	return class$;
}

$Class* Compression::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax