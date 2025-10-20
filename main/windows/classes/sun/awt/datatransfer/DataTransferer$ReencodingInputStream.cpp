#include <sun/awt/datatransfer/DataTransferer$ReencodingInputStream.h>

#include <java/awt/datatransfer/Transferable.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/IllegalCharsetNameException.h>
#include <java/nio/charset/UnsupportedCharsetException.h>
#include <java/util/Map.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <jcpp.h>

using $Transferable = ::java::awt::datatransfer::Transferable;
using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $IllegalCharsetNameException = ::java::nio::charset::IllegalCharsetNameException;
using $UnsupportedCharsetException = ::java::nio::charset::UnsupportedCharsetException;
using $Map = ::java::util::Map;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;

namespace sun {
	namespace awt {
		namespace datatransfer {

$FieldInfo _DataTransferer$ReencodingInputStream_FieldInfo_[] = {
	{"this$0", "Lsun/awt/datatransfer/DataTransferer;", nullptr, $FINAL | $SYNTHETIC, $field(DataTransferer$ReencodingInputStream, this$0)},
	{"wrapped", "Ljava/io/BufferedReader;", nullptr, 0, $field(DataTransferer$ReencodingInputStream, wrapped)},
	{"in", "[C", nullptr, $FINAL, $field(DataTransferer$ReencodingInputStream, in)},
	{"out", "[B", nullptr, 0, $field(DataTransferer$ReencodingInputStream, out)},
	{"encoder", "Ljava/nio/charset/CharsetEncoder;", nullptr, 0, $field(DataTransferer$ReencodingInputStream, encoder)},
	{"inBuf", "Ljava/nio/CharBuffer;", nullptr, 0, $field(DataTransferer$ReencodingInputStream, inBuf)},
	{"outBuf", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(DataTransferer$ReencodingInputStream, outBuf)},
	{"eoln", "[C", nullptr, 0, $field(DataTransferer$ReencodingInputStream, eoln)},
	{"numTerminators", "I", nullptr, 0, $field(DataTransferer$ReencodingInputStream, numTerminators)},
	{"eos", "Z", nullptr, 0, $field(DataTransferer$ReencodingInputStream, eos)},
	{"index", "I", nullptr, 0, $field(DataTransferer$ReencodingInputStream, index)},
	{"limit", "I", nullptr, 0, $field(DataTransferer$ReencodingInputStream, limit)},
	{}
};

$MethodInfo _DataTransferer$ReencodingInputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/datatransfer/DataTransferer;Ljava/io/InputStream;JLjava/lang/String;Ljava/awt/datatransfer/Transferable;)V", nullptr, $PUBLIC, $method(static_cast<void(DataTransferer$ReencodingInputStream::*)($DataTransferer*,$InputStream*,int64_t,$String*,$Transferable*)>(&DataTransferer$ReencodingInputStream::init$)), "java.io.IOException"},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"matchCharArray", "([CI)Z", nullptr, $PRIVATE, $method(static_cast<bool(DataTransferer$ReencodingInputStream::*)($chars*,int32_t)>(&DataTransferer$ReencodingInputStream::matchCharArray)), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readChar", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(DataTransferer$ReencodingInputStream::*)()>(&DataTransferer$ReencodingInputStream::readChar)), "java.io.IOException"},
	{}
};

$InnerClassInfo _DataTransferer$ReencodingInputStream_InnerClassesInfo_[] = {
	{"sun.awt.datatransfer.DataTransferer$ReencodingInputStream", "sun.awt.datatransfer.DataTransferer", "ReencodingInputStream", $PUBLIC},
	{}
};

$ClassInfo _DataTransferer$ReencodingInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.datatransfer.DataTransferer$ReencodingInputStream",
	"java.io.InputStream",
	nullptr,
	_DataTransferer$ReencodingInputStream_FieldInfo_,
	_DataTransferer$ReencodingInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_DataTransferer$ReencodingInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.datatransfer.DataTransferer"
};

$Object* allocate$DataTransferer$ReencodingInputStream($Class* clazz) {
	return $of($alloc(DataTransferer$ReencodingInputStream));
}

void DataTransferer$ReencodingInputStream::init$($DataTransferer* this$0, $InputStream* bytestream, int64_t format, $String* targetEncoding, $Transferable* localeTransferable) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$InputStream::init$();
	$set(this, in, $new($chars, 2));
	$var($Long, lFormat, $Long::valueOf(format));
	$var($String, sourceEncoding, this$0->getBestCharsetForTextFormat($($Long::valueOf(format)), localeTransferable));
	$set(this, wrapped, $new($BufferedReader, $$new($InputStreamReader, bytestream, sourceEncoding)));
	if (targetEncoding == nullptr) {
		$throwNew($NullPointerException, "null target encoding"_s);
	}
	try {
		$set(this, encoder, $nc($($Charset::forName(targetEncoding)))->newEncoder());
		$set(this, out, $new($bytes, $cast(int32_t, ($nc(this->encoder)->maxBytesPerChar() * 2 + 0.5))));
		$set(this, inBuf, $CharBuffer::wrap(this->in));
		$set(this, outBuf, $ByteBuffer::wrap(this->out));
	} catch ($IllegalCharsetNameException&) {
		$var($RuntimeException, e, $catch());
		$throwNew($IOException, $(e->toString()));
	} catch ($UnsupportedCharsetException&) {
		$var($RuntimeException, e, $catch());
		$throwNew($IOException, $(e->toString()));
	} catch ($UnsupportedOperationException&) {
		$var($RuntimeException, e, $catch());
		$throwNew($IOException, $(e->toString()));
	}
	$var($String, sEoln, $cast($String, $nc($DataTransferer::nativeEOLNs)->get(lFormat)));
	if (sEoln != nullptr) {
		$set(this, eoln, sEoln->toCharArray());
	}
	$var($Integer, terminators, $cast($Integer, $nc($DataTransferer::nativeTerminators)->get(lFormat)));
	if (terminators != nullptr) {
		this->numTerminators = terminators->intValue();
	}
}

int32_t DataTransferer$ReencodingInputStream::readChar() {
	int32_t c = $nc(this->wrapped)->read();
	if (c == -1) {
		this->eos = true;
		return -1;
	}
	if (this->numTerminators > 0 && c == 0) {
		this->eos = true;
		return -1;
	} else if (this->eoln != nullptr && matchCharArray(this->eoln, c)) {
		c = (int32_t)(u'\n' & (uint32_t)0x0000FFFF);
	}
	return c;
}

int32_t DataTransferer$ReencodingInputStream::read() {
	if (this->eos) {
		return -1;
	}
	if (this->index >= this->limit) {
		int32_t c = readChar();
		if (c == -1) {
			return -1;
		}
		$nc(this->in)->set(0, (char16_t)c);
		$nc(this->in)->set(1, (char16_t)0);
		$nc(this->inBuf)->limit(1);
		if ($Character::isHighSurrogate((char16_t)c)) {
			c = readChar();
			if (c != -1) {
				$nc(this->in)->set(1, (char16_t)c);
				$nc(this->inBuf)->limit(2);
			}
		}
		$nc(this->inBuf)->rewind();
		$nc($($nc(this->outBuf)->limit($nc(this->out)->length)))->rewind();
		$nc(this->encoder)->encode(this->inBuf, this->outBuf, false);
		$nc(this->outBuf)->flip();
		this->limit = $nc(this->outBuf)->limit();
		this->index = 0;
		return read();
	} else {
		return (int32_t)($nc(this->out)->get(this->index++) & (uint32_t)255);
	}
}

int32_t DataTransferer$ReencodingInputStream::available() {
	return ((this->eos) ? 0 : (this->limit - this->index));
}

void DataTransferer$ReencodingInputStream::close() {
	$nc(this->wrapped)->close();
}

bool DataTransferer$ReencodingInputStream::matchCharArray($chars* array, int32_t c) {
	$nc(this->wrapped)->mark($nc(array)->length);
	int32_t count = 0;
	if ((char16_t)c == $nc(array)->get(0)) {
		for (count = 1; count < array->length; ++count) {
			c = $nc(this->wrapped)->read();
			if (c == -1 || ((char16_t)c) != array->get(count)) {
				break;
			}
		}
	}
	if (count == $nc(array)->length) {
		return true;
	} else {
		$nc(this->wrapped)->reset();
		return false;
	}
}

DataTransferer$ReencodingInputStream::DataTransferer$ReencodingInputStream() {
}

$Class* DataTransferer$ReencodingInputStream::load$($String* name, bool initialize) {
	$loadClass(DataTransferer$ReencodingInputStream, name, initialize, &_DataTransferer$ReencodingInputStream_ClassInfo_, allocate$DataTransferer$ReencodingInputStream);
	return class$;
}

$Class* DataTransferer$ReencodingInputStream::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun