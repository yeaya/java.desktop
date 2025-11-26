#include <sun/print/CustomMediaSizeName.h>

#include <java/lang/Math.h>
#include <java/util/ArrayList.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <jcpp.h>

#undef INCH

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $MediaArray = $Array<::javax::print::attribute::standard::Media>;
using $MediaSizeNameArray = $Array<::javax::print::attribute::standard::MediaSizeName>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;

namespace sun {
	namespace print {

$FieldInfo _CustomMediaSizeName_FieldInfo_[] = {
	{"customStringTable", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(CustomMediaSizeName, customStringTable)},
	{"customEnumTable", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/print/attribute/standard/MediaSizeName;>;", $PRIVATE | $STATIC, $staticField(CustomMediaSizeName, customEnumTable)},
	{"choiceName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CustomMediaSizeName, choiceName)},
	{"mediaName", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE, $field(CustomMediaSizeName, mediaName)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CustomMediaSizeName, serialVersionUID)},
	{}
};

$MethodInfo _CustomMediaSizeName_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(CustomMediaSizeName::*)(int32_t)>(&CustomMediaSizeName::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CustomMediaSizeName::*)($String*)>(&CustomMediaSizeName::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;FF)V", nullptr, $PUBLIC, $method(static_cast<void(CustomMediaSizeName::*)($String*,$String*,float,float)>(&CustomMediaSizeName::init$))},
	{"findMedia", "([Ljavax/print/attribute/standard/Media;FFI)Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MediaSizeName*(*)($MediaArray*,float,float,int32_t)>(&CustomMediaSizeName::findMedia))},
	{"getChoiceName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getStandardMedia", "()Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getSuperEnumTable", "()[Ljavax/print/attribute/standard/Media;", nullptr, $PUBLIC},
	{"nextValue", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<int32_t(*)($String*)>(&CustomMediaSizeName::nextValue))},
	{}
};

$ClassInfo _CustomMediaSizeName_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.CustomMediaSizeName",
	"javax.print.attribute.standard.MediaSizeName",
	nullptr,
	_CustomMediaSizeName_FieldInfo_,
	_CustomMediaSizeName_MethodInfo_
};

$Object* allocate$CustomMediaSizeName($Class* clazz) {
	return $of($alloc(CustomMediaSizeName));
}

$ArrayList* CustomMediaSizeName::customStringTable = nullptr;
$ArrayList* CustomMediaSizeName::customEnumTable = nullptr;

void CustomMediaSizeName::init$(int32_t x) {
	$MediaSizeName::init$(x);
}

int32_t CustomMediaSizeName::nextValue($String* name) {
	$load(CustomMediaSizeName);
	$synchronized(class$) {
		$init(CustomMediaSizeName);
		$nc(CustomMediaSizeName::customStringTable)->add(name);
		return ($nc(CustomMediaSizeName::customStringTable)->size() - 1);
	}
}

void CustomMediaSizeName::init$($String* name) {
	$MediaSizeName::init$(nextValue(name));
	$nc(CustomMediaSizeName::customEnumTable)->add(this);
	$set(this, choiceName, nullptr);
	$set(this, mediaName, nullptr);
}

void CustomMediaSizeName::init$($String* name, $String* choice, float width, float length) {
	$MediaSizeName::init$(nextValue(name));
	$set(this, choiceName, choice);
	$nc(CustomMediaSizeName::customEnumTable)->add(this);
	$set(this, mediaName, nullptr);
	try {
		$set(this, mediaName, $MediaSize::findMedia(width, length, $MediaSize::INCH));
	} catch ($IllegalArgumentException& iae) {
	}
	if (this->mediaName != nullptr) {
		$var($MediaSize, sz, $MediaSize::getMediaSizeForName(this->mediaName));
		if (sz == nullptr) {
			$set(this, mediaName, nullptr);
		} else {
			float w = $nc(sz)->getX($MediaSize::INCH);
			float h = sz->getY($MediaSize::INCH);
			float dw = $Math::abs(w - width);
			float dh = $Math::abs(h - length);
			if (dw > 0.1 || dh > 0.1) {
				$set(this, mediaName, nullptr);
			}
		}
	}
}

$String* CustomMediaSizeName::getChoiceName() {
	return this->choiceName;
}

$MediaSizeName* CustomMediaSizeName::getStandardMedia() {
	return this->mediaName;
}

$MediaSizeName* CustomMediaSizeName::findMedia($MediaArray* media, float x, float y, int32_t units) {
	$init(CustomMediaSizeName);
	$useLocalCurrentObjectStackCache();
	if (x <= 0.0f || y <= 0.0f || units < 1) {
		$throwNew($IllegalArgumentException, "args must be +ve values"_s);
	}
	if (media == nullptr || $nc(media)->length == 0) {
		$throwNew($IllegalArgumentException, "args must have valid array of media"_s);
	}
	int32_t size = 0;
	$var($MediaSizeNameArray, msn, $new($MediaSizeNameArray, $nc(media)->length));
	for (int32_t i = 0; i < media->length; ++i) {
		if ($instanceOf($MediaSizeName, media->get(i))) {
			msn->set(size++, $cast($MediaSizeName, media->get(i)));
		}
	}
	if (size == 0) {
		return nullptr;
	}
	int32_t match = 0;
	double ls = x * x + y * y;
	double tmp_ls = 0.0;
	$var($floats, dim, nullptr);
	float diffx = x;
	float diffy = y;
	for (int32_t i = 0; i < size; ++i) {
		$var($MediaSize, mediaSize, $MediaSize::getMediaSizeForName(msn->get(i)));
		if (mediaSize == nullptr) {
			continue;
		}
		$assign(dim, $nc(mediaSize)->getSize(units));
		if (x == $nc(dim)->get(0) && y == dim->get(1)) {
			match = i;
			break;
		} else {
			diffx = x - dim->get(0);
			diffy = y - dim->get(1);
			tmp_ls = diffx * diffx + diffy * diffy;
			if (tmp_ls < ls) {
				ls = tmp_ls;
				match = i;
			}
		}
	}
	return msn->get(match);
}

$MediaArray* CustomMediaSizeName::getSuperEnumTable() {
	return $fcast($MediaArray, $MediaSizeName::getEnumValueTable());
}

$StringArray* CustomMediaSizeName::getStringTable() {
	$var($StringArray, nameTable, $new($StringArray, $nc(CustomMediaSizeName::customStringTable)->size()));
	return $fcast($StringArray, $nc(CustomMediaSizeName::customStringTable)->toArray(nameTable));
}

$EnumSyntaxArray* CustomMediaSizeName::getEnumValueTable() {
	$var($MediaSizeNameArray, enumTable, $new($MediaSizeNameArray, $nc(CustomMediaSizeName::customEnumTable)->size()));
	return $fcast($EnumSyntaxArray, $nc(CustomMediaSizeName::customEnumTable)->toArray(enumTable));
}

void clinit$CustomMediaSizeName($Class* class$) {
	$assignStatic(CustomMediaSizeName::customStringTable, $new($ArrayList));
	$assignStatic(CustomMediaSizeName::customEnumTable, $new($ArrayList));
}

CustomMediaSizeName::CustomMediaSizeName() {
}

$Class* CustomMediaSizeName::load$($String* name, bool initialize) {
	$loadClass(CustomMediaSizeName, name, initialize, &_CustomMediaSizeName_ClassInfo_, clinit$CustomMediaSizeName, allocate$CustomMediaSizeName);
	return class$;
}

$Class* CustomMediaSizeName::class$ = nullptr;

	} // print
} // sun