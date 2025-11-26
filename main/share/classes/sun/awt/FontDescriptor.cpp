#include <sun/awt/FontDescriptor.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/lang/Cloneable.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/NativeLibLoader.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef UTF_16BE
#undef UTF_16LE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $NativeLibLoader = ::sun::awt::NativeLibLoader;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {

$FieldInfo _FontDescriptor_FieldInfo_[] = {
	{"nativeName", "Ljava/lang/String;", nullptr, 0, $field(FontDescriptor, nativeName)},
	{"encoder", "Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $field(FontDescriptor, encoder)},
	{"charsetName", "Ljava/lang/String;", nullptr, 0, $field(FontDescriptor, charsetName)},
	{"exclusionRanges", "[I", nullptr, $PRIVATE, $field(FontDescriptor, exclusionRanges)},
	{"unicodeEncoder", "Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $field(FontDescriptor, unicodeEncoder)},
	{"useUnicode", "Z", nullptr, 0, $field(FontDescriptor, useUnicode$)},
	{"isLE", "Z", nullptr, $STATIC, $staticField(FontDescriptor, isLE)},
	{}
};

$MethodInfo _FontDescriptor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/nio/charset/CharsetEncoder;[I)V", nullptr, $PUBLIC, $method(static_cast<void(FontDescriptor::*)($String*,$CharsetEncoder*,$ints*)>(&FontDescriptor::init$))},
	{"getExclusionRanges", "()[I", nullptr, $PUBLIC},
	{"getFontCharsetEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"getFontCharsetName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNativeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&FontDescriptor::initIDs))},
	{"isExcluded", "(C)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"useUnicode", "()Z", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 5

$ClassInfo _FontDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.FontDescriptor",
	"java.lang.Object",
	"java.lang.Cloneable",
	_FontDescriptor_FieldInfo_,
	_FontDescriptor_MethodInfo_
};

$Object* allocate$FontDescriptor($Class* clazz) {
	return $of($alloc(FontDescriptor));
}

bool FontDescriptor::isLE = false;

void FontDescriptor::init$($String* nativeName, $CharsetEncoder* encoder, $ints* exclusionRanges) {
	$useLocalCurrentObjectStackCache();
	$set(this, nativeName, nativeName);
	$set(this, encoder, encoder);
	$set(this, exclusionRanges, exclusionRanges);
	this->useUnicode$ = false;
	$var($Charset, cs, $nc(encoder)->charset());
	try {
		$var($OutputStreamWriter, osw, $new($OutputStreamWriter, static_cast<$OutputStream*>($$new($ByteArrayOutputStream)), cs));
		$set(this, charsetName, osw->getEncoding());
		osw->close();
	} catch ($IOException& ioe) {
	}
}

$String* FontDescriptor::getNativeName() {
	return this->nativeName;
}

$CharsetEncoder* FontDescriptor::getFontCharsetEncoder() {
	return this->encoder;
}

$String* FontDescriptor::getFontCharsetName() {
	return this->charsetName;
}

$ints* FontDescriptor::getExclusionRanges() {
	return this->exclusionRanges;
}

bool FontDescriptor::isExcluded(char16_t ch) {
	for (int32_t i = 0; i < $nc(this->exclusionRanges)->length;) {
		int32_t lo = ($nc(this->exclusionRanges)->get(i++));
		int32_t up = ($nc(this->exclusionRanges)->get(i++));
		if (ch >= lo && ch <= up) {
			return true;
		}
	}
	return false;
}

$String* FontDescriptor::toString() {
	return $str({$($Cloneable::toString()), " ["_s, this->nativeName, "|"_s, this->encoder, "]"_s});
}

void FontDescriptor::initIDs() {
	$init(FontDescriptor);
	$prepareNativeStatic(FontDescriptor, initIDs, void);
	$invokeNativeStatic(FontDescriptor, initIDs);
	$finishNativeStatic();
}

bool FontDescriptor::useUnicode() {
	if (this->useUnicode$ && this->unicodeEncoder == nullptr) {
		try {
			$init($StandardCharsets);
			$set(this, unicodeEncoder, FontDescriptor::isLE ? $nc($StandardCharsets::UTF_16LE)->newEncoder() : $nc($StandardCharsets::UTF_16BE)->newEncoder());
		} catch ($IllegalArgumentException& x) {
		}
	}
	return this->useUnicode$;
}

void clinit$FontDescriptor($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$NativeLibLoader::loadLibraries();
		FontDescriptor::initIDs();
	}
	{
		$var($String, enc, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.io.unicode.encoding"_s, "UnicodeBig"_s)))));
		FontDescriptor::isLE = !"UnicodeBig"_s->equals(enc);
	}
}

FontDescriptor::FontDescriptor() {
}

$Class* FontDescriptor::load$($String* name, bool initialize) {
	$loadClass(FontDescriptor, name, initialize, &_FontDescriptor_ClassInfo_, clinit$FontDescriptor, allocate$FontDescriptor);
	return class$;
}

$Class* FontDescriptor::class$ = nullptr;

	} // awt
} // sun