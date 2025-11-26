#include <javax/swing/text/rtf/AbstractFilter.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _AbstractFilter_FieldInfo_[] = {
	{"translationTable", "[C", nullptr, $PROTECTED, $field(AbstractFilter, translationTable)},
	{"specialsTable", "[Z", nullptr, $PROTECTED, $field(AbstractFilter, specialsTable)},
	{"latin1TranslationTable", "[C", nullptr, $STATIC | $FINAL, $staticField(AbstractFilter, latin1TranslationTable)},
	{"noSpecialsTable", "[Z", nullptr, $STATIC | $FINAL, $staticField(AbstractFilter, noSpecialsTable)},
	{"allSpecialsTable", "[Z", nullptr, $STATIC | $FINAL, $staticField(AbstractFilter, allSpecialsTable)},
	{}
};

$MethodInfo _AbstractFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AbstractFilter::*)()>(&AbstractFilter::init$))},
	{"readFromReader", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFromStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(C)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeSpecial", "(I)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _AbstractFilter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.text.rtf.AbstractFilter",
	"java.io.OutputStream",
	nullptr,
	_AbstractFilter_FieldInfo_,
	_AbstractFilter_MethodInfo_
};

$Object* allocate$AbstractFilter($Class* clazz) {
	return $of($alloc(AbstractFilter));
}

$chars* AbstractFilter::latin1TranslationTable = nullptr;
$booleans* AbstractFilter::noSpecialsTable = nullptr;
$booleans* AbstractFilter::allSpecialsTable = nullptr;

void AbstractFilter::readFromStream($InputStream* in) {
	$nc(in)->transferTo(this);
}

void AbstractFilter::readFromReader($Reader* in) {
	$var($chars, buf, nullptr);
	int32_t count = 0;
	$assign(buf, $new($chars, 2048));
	while (true) {
		count = $nc(in)->read(buf);
		if (count < 0) {
			break;
		}
		for (int32_t i = 0; i < count; ++i) {
			this->write(buf->get(i));
		}
	}
}

void AbstractFilter::init$() {
	$OutputStream::init$();
	$set(this, translationTable, AbstractFilter::latin1TranslationTable);
	$set(this, specialsTable, AbstractFilter::noSpecialsTable);
}

void AbstractFilter::write(int32_t b) {
	if (b < 0) {
		b += 256;
	}
	if ($nc(this->specialsTable)->get(b)) {
		writeSpecial(b);
	} else {
		char16_t ch = $nc(this->translationTable)->get(b);
		if (ch != (char16_t)0) {
			write(ch);
		}
	}
}

void AbstractFilter::write($bytes* buf, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, accumulator, nullptr);
	while (len > 0) {
		int16_t b = (int16_t)$nc(buf)->get(off);
		if (b < 0) {
			b += 256;
		}
		if ($nc(this->specialsTable)->get(b)) {
			if (accumulator != nullptr) {
				write($(accumulator->toString()));
				$assign(accumulator, nullptr);
			}
			writeSpecial(b);
		} else {
			char16_t ch = $nc(this->translationTable)->get(b);
			if (ch != (char16_t)0) {
				if (accumulator == nullptr) {
					$assign(accumulator, $new($StringBuilder));
				}
				$nc(accumulator)->append(ch);
			}
		}
		--len;
		++off;
	}
	if (accumulator != nullptr) {
		write($(accumulator->toString()));
	}
}

void AbstractFilter::write($String* s) {
	int32_t index = 0;
	int32_t length = 0;
	length = $nc(s)->length();
	for (index = 0; index < length; ++index) {
		write(s->charAt(index));
	}
}

void clinit$AbstractFilter($Class* class$) {
	{
		int32_t i = 0;
		$assignStatic(AbstractFilter::noSpecialsTable, $new($booleans, 256));
		for (i = 0; i < 256; ++i) {
			$nc(AbstractFilter::noSpecialsTable)->set(i, false);
		}
		$assignStatic(AbstractFilter::allSpecialsTable, $new($booleans, 256));
		for (i = 0; i < 256; ++i) {
			$nc(AbstractFilter::allSpecialsTable)->set(i, true);
		}
		$assignStatic(AbstractFilter::latin1TranslationTable, $new($chars, 256));
		for (i = 0; i < 256; ++i) {
			$nc(AbstractFilter::latin1TranslationTable)->set(i, (char16_t)i);
		}
	}
}

AbstractFilter::AbstractFilter() {
}

$Class* AbstractFilter::load$($String* name, bool initialize) {
	$loadClass(AbstractFilter, name, initialize, &_AbstractFilter_ClassInfo_, clinit$AbstractFilter, allocate$AbstractFilter);
	return class$;
}

$Class* AbstractFilter::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax