#include <sun/awt/windows/HTMLCodec.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/BufferedReader.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/awt/windows/EHTMLReadMode.h>
#include <sun/awt/windows/HTMLCodec$1.h>
#include <jcpp.h>

#undef BYTE_BUFFER_LEN
#undef CHAR_BUFFER_LEN
#undef DEF_SOURCE_URL
#undef ENCODING
#undef END_FRAGMENT
#undef END_FRAGMENT_CMT
#undef END_HTML
#undef END_SELECTION
#undef EOLN
#undef FAILURE_MSG
#undef INVALID_MSG
#undef PADDED_WIDTH
#undef SOURCE_URL
#undef START_FRAGMENT
#undef START_FRAGMENT_CMT
#undef START_HTML
#undef START_SELECTION
#undef VERSION
#undef VERSION_NUM

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $BufferedReader = ::java::io::BufferedReader;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Arrays = ::java::util::Arrays;
using $EHTMLReadMode = ::sun::awt::windows::EHTMLReadMode;
using $HTMLCodec$1 = ::sun::awt::windows::HTMLCodec$1;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _HTMLCodec_FieldInfo_[] = {
	{"ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, ENCODING)},
	{"VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, VERSION)},
	{"START_HTML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, START_HTML)},
	{"END_HTML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, END_HTML)},
	{"START_FRAGMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, START_FRAGMENT)},
	{"END_FRAGMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, END_FRAGMENT)},
	{"START_SELECTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, START_SELECTION)},
	{"END_SELECTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, END_SELECTION)},
	{"START_FRAGMENT_CMT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, START_FRAGMENT_CMT)},
	{"END_FRAGMENT_CMT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, END_FRAGMENT_CMT)},
	{"SOURCE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, SOURCE_URL)},
	{"DEF_SOURCE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, DEF_SOURCE_URL)},
	{"EOLN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLCodec, EOLN)},
	{"VERSION_NUM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLCodec, VERSION_NUM)},
	{"PADDED_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLCodec, PADDED_WIDTH)},
	{"bufferedStream", "Ljava/io/BufferedInputStream;", nullptr, $PRIVATE | $FINAL, $field(HTMLCodec, bufferedStream)},
	{"descriptionParsed", "Z", nullptr, $PRIVATE, $field(HTMLCodec, descriptionParsed)},
	{"closed", "Z", nullptr, $PRIVATE, $field(HTMLCodec, closed)},
	{"BYTE_BUFFER_LEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(HTMLCodec, BYTE_BUFFER_LEN)},
	{"CHAR_BUFFER_LEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(HTMLCodec, CHAR_BUFFER_LEN)},
	{"FAILURE_MSG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLCodec, FAILURE_MSG)},
	{"INVALID_MSG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLCodec, INVALID_MSG)},
	{"iHTMLStart", "J", nullptr, $PRIVATE, $field(HTMLCodec, iHTMLStart)},
	{"iHTMLEnd", "J", nullptr, $PRIVATE, $field(HTMLCodec, iHTMLEnd)},
	{"iFragStart", "J", nullptr, $PRIVATE, $field(HTMLCodec, iFragStart)},
	{"iFragEnd", "J", nullptr, $PRIVATE, $field(HTMLCodec, iFragEnd)},
	{"iSelStart", "J", nullptr, $PRIVATE, $field(HTMLCodec, iSelStart)},
	{"iSelEnd", "J", nullptr, $PRIVATE, $field(HTMLCodec, iSelEnd)},
	{"stBaseURL", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HTMLCodec, stBaseURL)},
	{"stVersion", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HTMLCodec, stVersion)},
	{"iStartOffset", "J", nullptr, $PRIVATE, $field(HTMLCodec, iStartOffset)},
	{"iEndOffset", "J", nullptr, $PRIVATE, $field(HTMLCodec, iEndOffset)},
	{"iReadCount", "J", nullptr, $PRIVATE, $field(HTMLCodec, iReadCount)},
	{"readMode", "Lsun/awt/windows/EHTMLReadMode;", nullptr, $PRIVATE, $field(HTMLCodec, readMode)},
	{}
};

$MethodInfo _HTMLCodec_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Lsun/awt/windows/EHTMLReadMode;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLCodec::*)($InputStream*,$EHTMLReadMode*)>(&HTMLCodec::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"convertToHTMLFormat", "([B)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&HTMLCodec::convertToHTMLFormat))},
	{"getBaseURL", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"parseDescription", "()V", nullptr, $PRIVATE, $method(static_cast<void(HTMLCodec::*)()>(&HTMLCodec::parseDescription)), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"toPaddedString", "(II)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t,int32_t)>(&HTMLCodec::toPaddedString))},
	{}
};

$InnerClassInfo _HTMLCodec_InnerClassesInfo_[] = {
	{"sun.awt.windows.HTMLCodec$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _HTMLCodec_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.HTMLCodec",
	"java.io.InputStream",
	nullptr,
	_HTMLCodec_FieldInfo_,
	_HTMLCodec_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLCodec_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.HTMLCodec$1"
};

$Object* allocate$HTMLCodec($Class* clazz) {
	return $of($alloc(HTMLCodec));
}

$String* HTMLCodec::ENCODING = nullptr;
$String* HTMLCodec::VERSION = nullptr;
$String* HTMLCodec::START_HTML = nullptr;
$String* HTMLCodec::END_HTML = nullptr;
$String* HTMLCodec::START_FRAGMENT = nullptr;
$String* HTMLCodec::END_FRAGMENT = nullptr;
$String* HTMLCodec::START_SELECTION = nullptr;
$String* HTMLCodec::END_SELECTION = nullptr;
$String* HTMLCodec::START_FRAGMENT_CMT = nullptr;
$String* HTMLCodec::END_FRAGMENT_CMT = nullptr;
$String* HTMLCodec::SOURCE_URL = nullptr;
$String* HTMLCodec::DEF_SOURCE_URL = nullptr;
$String* HTMLCodec::EOLN = nullptr;
$String* HTMLCodec::VERSION_NUM = nullptr;
$String* HTMLCodec::FAILURE_MSG = nullptr;
$String* HTMLCodec::INVALID_MSG = nullptr;

$String* HTMLCodec::toPaddedString(int32_t n, int32_t width) {
	$init(HTMLCodec);
	$useLocalCurrentObjectStackCache();
	$var($String, string, $str({""_s, $$str(n)}));
	int32_t len = $nc(string)->length();
	if (n >= 0 && len < width) {
		$var($chars, array, $new($chars, width - len));
		$Arrays::fill(array, u'0');
		$assign(string, $str({$($String::valueOf(array)), string}));
	}
	return string;
}

$bytes* HTMLCodec::convertToHTMLFormat($bytes* bytes) {
	$init(HTMLCodec);
	$useLocalCurrentObjectStackCache();
	$var($String, htmlPrefix, ""_s);
	$var($String, htmlSuffix, ""_s);
	{
		$var($String, stContext, $new($String, bytes));
		$var($String, stUpContext, stContext->toUpperCase());
		if (-1 == stUpContext->indexOf("<HTML"_s)) {
			$assign(htmlPrefix, "<HTML>"_s);
			$assign(htmlSuffix, "</HTML>"_s);
			if (-1 == stUpContext->indexOf("<BODY"_s)) {
				$assign(htmlPrefix, $str({htmlPrefix, "<BODY>"_s}));
				$assign(htmlSuffix, $str({"</BODY>"_s, htmlSuffix}));
			}
		}
	}
	$var($String, stBaseUrl, HTMLCodec::DEF_SOURCE_URL);
	int32_t var$12 = $nc(HTMLCodec::VERSION)->length();
	int32_t var$11 = var$12 + $nc(HTMLCodec::VERSION_NUM)->length();
	int32_t var$10 = var$11 + $nc(HTMLCodec::EOLN)->length();
	int32_t var$9 = var$10 + $nc(HTMLCodec::START_HTML)->length() + HTMLCodec::PADDED_WIDTH;
	int32_t var$8 = var$9 + $nc(HTMLCodec::EOLN)->length();
	int32_t var$7 = var$8 + $nc(HTMLCodec::END_HTML)->length() + HTMLCodec::PADDED_WIDTH;
	int32_t var$6 = var$7 + $nc(HTMLCodec::EOLN)->length();
	int32_t var$5 = var$6 + $nc(HTMLCodec::START_FRAGMENT)->length() + HTMLCodec::PADDED_WIDTH;
	int32_t var$4 = var$5 + $nc(HTMLCodec::EOLN)->length();
	int32_t var$3 = var$4 + $nc(HTMLCodec::END_FRAGMENT)->length() + HTMLCodec::PADDED_WIDTH;
	int32_t var$2 = var$3 + $nc(HTMLCodec::EOLN)->length();
	int32_t var$1 = var$2 + $nc(HTMLCodec::SOURCE_URL)->length();
	int32_t var$0 = var$1 + $nc(stBaseUrl)->length();
	int32_t nStartHTML = var$0 + $nc(HTMLCodec::EOLN)->length();
	int32_t nStartFragment = nStartHTML + htmlPrefix->length();
	int32_t nEndFragment = nStartFragment + $nc(bytes)->length - 1;
	int32_t nEndHTML = nEndFragment + htmlSuffix->length();
	$var($StringBuilder, header, $new($StringBuilder, nStartFragment + $nc(HTMLCodec::START_FRAGMENT_CMT)->length()));
	header->append(HTMLCodec::VERSION);
	header->append(HTMLCodec::VERSION_NUM);
	header->append(HTMLCodec::EOLN);
	header->append(HTMLCodec::START_HTML);
	header->append($(toPaddedString(nStartHTML, HTMLCodec::PADDED_WIDTH)));
	header->append(HTMLCodec::EOLN);
	header->append(HTMLCodec::END_HTML);
	header->append($(toPaddedString(nEndHTML, HTMLCodec::PADDED_WIDTH)));
	header->append(HTMLCodec::EOLN);
	header->append(HTMLCodec::START_FRAGMENT);
	header->append($(toPaddedString(nStartFragment, HTMLCodec::PADDED_WIDTH)));
	header->append(HTMLCodec::EOLN);
	header->append(HTMLCodec::END_FRAGMENT);
	header->append($(toPaddedString(nEndFragment, HTMLCodec::PADDED_WIDTH)));
	header->append(HTMLCodec::EOLN);
	header->append(HTMLCodec::SOURCE_URL);
	header->append(stBaseUrl);
	header->append(HTMLCodec::EOLN);
	header->append(htmlPrefix);
	$var($bytes, headerBytes, nullptr);
	$var($bytes, trailerBytes, nullptr);
	try {
		$assign(headerBytes, $nc($(header->toString()))->getBytes(HTMLCodec::ENCODING));
		$assign(trailerBytes, htmlSuffix->getBytes(HTMLCodec::ENCODING));
	} catch ($UnsupportedEncodingException&) {
		$catch();
	}
	$var($bytes, retval, $new($bytes, $nc(headerBytes)->length + bytes->length + $nc(trailerBytes)->length));
	$System::arraycopy(headerBytes, 0, retval, 0, headerBytes->length);
	$System::arraycopy(bytes, 0, retval, headerBytes->length, bytes->length - 1);
	$System::arraycopy(trailerBytes, 0, retval, headerBytes->length + bytes->length - 1, trailerBytes->length);
	retval->set(retval->length - 1, (int8_t)0);
	return retval;
}

void HTMLCodec::init$($InputStream* _bytestream, $EHTMLReadMode* _readMode) {
	$InputStream::init$();
	this->descriptionParsed = false;
	this->closed = false;
	$set(this, bufferedStream, $new($BufferedInputStream, _bytestream, HTMLCodec::BYTE_BUFFER_LEN));
	$set(this, readMode, _readMode);
}

$String* HTMLCodec::getBaseURL() {
	$synchronized(this) {
		if (!this->descriptionParsed) {
			parseDescription();
		}
		return this->stBaseURL;
	}
}

$String* HTMLCodec::getVersion() {
	$synchronized(this) {
		if (!this->descriptionParsed) {
			parseDescription();
		}
		return this->stVersion;
	}
}

void HTMLCodec::parseDescription() {
	$useLocalCurrentObjectStackCache();
	$set(this, stBaseURL, nullptr);
	$set(this, stVersion, nullptr);
	this->iHTMLEnd = (this->iHTMLStart = (this->iFragEnd = (this->iFragStart = (this->iSelEnd = (this->iSelStart = -1)))));
	$nc(this->bufferedStream)->mark(HTMLCodec::BYTE_BUFFER_LEN);
	$var($StringArray, astEntries, $new($StringArray, {
		HTMLCodec::VERSION,
		HTMLCodec::START_HTML,
		HTMLCodec::END_HTML,
		HTMLCodec::START_FRAGMENT,
		HTMLCodec::END_FRAGMENT,
		HTMLCodec::START_SELECTION,
		HTMLCodec::END_SELECTION,
		HTMLCodec::SOURCE_URL
	}));
	$var($BufferedReader, bufferedReader, $new($BufferedReader, $$new($InputStreamReader, static_cast<$InputStream*>(this->bufferedStream), HTMLCodec::ENCODING), HTMLCodec::CHAR_BUFFER_LEN));
	int64_t iHeadSize = 0;
	int64_t iCRSize = $nc(HTMLCodec::EOLN)->length();
	int32_t iEntCount = astEntries->length;
	bool bContinue = true;
	for (int32_t iEntry = 0; iEntry < iEntCount; ++iEntry) {
		$var($String, stLine, bufferedReader->readLine());
		if (nullptr == stLine) {
			break;
		}
		for (; iEntry < iEntCount; ++iEntry) {
			if (!$nc(stLine)->startsWith(astEntries->get(iEntry))) {
				continue;
			}
			iHeadSize += $nc(stLine)->length() + iCRSize;
			$var($String, stValue, $(stLine->substring($nc(astEntries->get(iEntry))->length()))->trim());
			if (nullptr != stValue) {
				try {
					switch (iEntry) {
					case 0:
						{
							$set(this, stVersion, stValue);
							break;
						}
					case 1:
						{
							this->iHTMLStart = $Integer::parseInt(stValue);
							break;
						}
					case 2:
						{
							this->iHTMLEnd = $Integer::parseInt(stValue);
							break;
						}
					case 3:
						{
							this->iFragStart = $Integer::parseInt(stValue);
							break;
						}
					case 4:
						{
							this->iFragEnd = $Integer::parseInt(stValue);
							break;
						}
					case 5:
						{
							this->iSelStart = $Integer::parseInt(stValue);
							break;
						}
					case 6:
						{
							this->iSelEnd = $Integer::parseInt(stValue);
							break;
						}
					case 7:
						{
							$set(this, stBaseURL, stValue);
							break;
						}
					}
				} catch ($NumberFormatException&) {
					$var($NumberFormatException, e, $catch());
					$throwNew($IOException, $$str({HTMLCodec::FAILURE_MSG, astEntries->get(iEntry), " value "_s, e, HTMLCodec::INVALID_MSG}));
				}
			}
			break;
		}
	}
	if (-1 == this->iHTMLStart) {
		this->iHTMLStart = iHeadSize;
	}
	if (-1 == this->iFragStart) {
		this->iFragStart = this->iHTMLStart;
	}
	if (-1 == this->iFragEnd) {
		this->iFragEnd = this->iHTMLEnd;
	}
	if (-1 == this->iSelStart) {
		this->iSelStart = this->iFragStart;
	}
	if (-1 == this->iSelEnd) {
		this->iSelEnd = this->iFragEnd;
	}
	$init($HTMLCodec$1);
	switch ($nc($HTMLCodec$1::$SwitchMap$sun$awt$windows$EHTMLReadMode)->get($nc((this->readMode))->ordinal())) {
	case 1:
		{
			this->iStartOffset = this->iHTMLStart;
			this->iEndOffset = this->iHTMLEnd;
			break;
		}
	case 2:
		{
			this->iStartOffset = this->iFragStart;
			this->iEndOffset = this->iFragEnd;
			break;
		}
	case 3:
		{}
	default:
		{
			this->iStartOffset = this->iSelStart;
			this->iEndOffset = this->iSelEnd;
			break;
		}
	}
	$nc(this->bufferedStream)->reset();
	if (-1 == this->iStartOffset) {
		$throwNew($IOException, $$str({HTMLCodec::FAILURE_MSG, "invalid HTML format."_s}));
	}
	int32_t curOffset = 0;
	while (curOffset < this->iStartOffset) {
		curOffset += $nc(this->bufferedStream)->skip(this->iStartOffset - curOffset);
	}
	this->iReadCount = curOffset;
	if (this->iStartOffset != this->iReadCount) {
		$throwNew($IOException, $$str({HTMLCodec::FAILURE_MSG, "Byte stream ends in description."_s}));
	}
	this->descriptionParsed = true;
}

int32_t HTMLCodec::read() {
	$synchronized(this) {
		if (this->closed) {
			$throwNew($IOException, "Stream closed"_s);
		}
		if (!this->descriptionParsed) {
			parseDescription();
		}
		if (-1 != this->iEndOffset && this->iReadCount >= this->iEndOffset) {
			return -1;
		}
		int32_t retval = $nc(this->bufferedStream)->read();
		if (retval == -1) {
			return -1;
		}
		++this->iReadCount;
		return retval;
	}
}

void HTMLCodec::close() {
	$synchronized(this) {
		if (!this->closed) {
			this->closed = true;
			$nc(this->bufferedStream)->close();
		}
	}
}

HTMLCodec::HTMLCodec() {
}

void clinit$HTMLCodec($Class* class$) {
	$assignStatic(HTMLCodec::ENCODING, "UTF-8"_s);
	$assignStatic(HTMLCodec::VERSION, "Version:"_s);
	$assignStatic(HTMLCodec::START_HTML, "StartHTML:"_s);
	$assignStatic(HTMLCodec::END_HTML, "EndHTML:"_s);
	$assignStatic(HTMLCodec::START_FRAGMENT, "StartFragment:"_s);
	$assignStatic(HTMLCodec::END_FRAGMENT, "EndFragment:"_s);
	$assignStatic(HTMLCodec::START_SELECTION, "StartSelection:"_s);
	$assignStatic(HTMLCodec::END_SELECTION, "EndSelection:"_s);
	$assignStatic(HTMLCodec::START_FRAGMENT_CMT, "<!--StartFragment-->"_s);
	$assignStatic(HTMLCodec::END_FRAGMENT_CMT, "<!--EndFragment-->"_s);
	$assignStatic(HTMLCodec::SOURCE_URL, "SourceURL:"_s);
	$assignStatic(HTMLCodec::DEF_SOURCE_URL, "about:blank"_s);
	$assignStatic(HTMLCodec::EOLN, "\r\n"_s);
	$assignStatic(HTMLCodec::VERSION_NUM, "1.0"_s);
	$assignStatic(HTMLCodec::FAILURE_MSG, "Unable to parse HTML description: "_s);
	$assignStatic(HTMLCodec::INVALID_MSG, " invalid"_s);
}

$Class* HTMLCodec::load$($String* name, bool initialize) {
	$loadClass(HTMLCodec, name, initialize, &_HTMLCodec_ClassInfo_, clinit$HTMLCodec, allocate$HTMLCodec);
	return class$;
}

$Class* HTMLCodec::class$ = nullptr;

		} // windows
	} // awt
} // sun