#include <sun/font/Type1Font.h>

#include <java/awt/FontFormatException.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/ref/WeakReference.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/FileChannel.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/FileFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontScaler.h>
#include <sun/font/FontScalerException.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/Type1Font$1.h>
#include <sun/font/Type1Font$2.h>
#include <sun/font/Type1Font$T1DisposerRecord.h>
#include <sun/font/Type1GlyphMapper.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef LITTLE_ENDIAN
#undef PSEOFTOKEN
#undef PSNAMETOKEN
#undef PSSTRINGTOKEN
#undef TYPE1_RANK

using $FontFormatException = ::java::awt::FontFormatException;
using $IOException = ::java::io::IOException;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Buffer = ::java::nio::Buffer;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $FileFont = ::sun::font::FileFont;
using $Font2D = ::sun::font::Font2D;
using $FontScaler = ::sun::font::FontScaler;
using $FontScalerException = ::sun::font::FontScalerException;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $Type1Font$1 = ::sun::font::Type1Font$1;
using $Type1Font$2 = ::sun::font::Type1Font$2;
using $Type1Font$T1DisposerRecord = ::sun::font::Type1Font$T1DisposerRecord;
using $Type1GlyphMapper = ::sun::font::Type1GlyphMapper;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace font {

$FieldInfo _Type1Font_FieldInfo_[] = {
	{"bufferRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/nio/ByteBuffer;>;", 0, $field(Type1Font, bufferRef)},
	{"psName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Type1Font, psName)},
	{"styleAbbreviationsMapping", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(Type1Font, styleAbbreviationsMapping)},
	{"styleNameTokes", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(Type1Font, styleNameTokes)},
	{"PSEOFTOKEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Type1Font, PSEOFTOKEN)},
	{"PSNAMETOKEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Type1Font, PSNAMETOKEN)},
	{"PSSTRINGTOKEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Type1Font, PSSTRINGTOKEN)},
	{}
};

$MethodInfo _Type1Font_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Type1Font::*)($String*,Object$*)>(&Type1Font::init$)), "java.awt.FontFormatException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Type1Font::*)($String*,Object$*,bool)>(&Type1Font::init$)), "java.awt.FontFormatException"},
	{"close", "()V", nullptr, $PROTECTED},
	{"expandAbbreviation", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Type1Font::*)($String*)>(&Type1Font::expandAbbreviation))},
	{"expandName", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Type1Font::*)($String*,bool)>(&Type1Font::expandName))},
	{"fullName2FamilyName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Type1Font::*)($String*)>(&Type1Font::fullName2FamilyName))},
	{"getBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$ByteBuffer*(Type1Font::*)()>(&Type1Font::getBuffer)), "java.awt.FontFormatException"},
	{"getFileSize", "()I", nullptr, $PUBLIC},
	{"getGlyphCode", "(C)I", nullptr, $PUBLIC},
	{"getMapper", "()Lsun/font/CharToGlyphMapper;", nullptr, 0},
	{"getMissingGlyphCode", "()I", nullptr, $PUBLIC},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{"getPostscriptName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getScaler", "()Lsun/font/FontScaler;", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getSimpleToken", "(Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Type1Font::*)($ByteBuffer*)>(&Type1Font::getSimpleToken))},
	{"getString", "(Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Type1Font::*)($ByteBuffer*)>(&Type1Font::getString))},
	{"initNames", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(Type1Font::*)($ByteBuffer*)>(&Type1Font::initNames)), "java.awt.FontFormatException"},
	{"isStyleToken", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Type1Font::*)($String*)>(&Type1Font::isStyleToken))},
	{"nextCapitalLetter", "(Ljava/lang/String;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Type1Font::*)($String*,int32_t)>(&Type1Font::nextCapitalLetter))},
	{"nextTokenType", "(Ljava/nio/ByteBuffer;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Type1Font::*)($ByteBuffer*)>(&Type1Font::nextTokenType))},
	{"psName2FamilyName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Type1Font::*)($String*)>(&Type1Font::psName2FamilyName))},
	{"psName2FullName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Type1Font::*)($String*)>(&Type1Font::psName2FullName))},
	{"readBlock", "(II)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"readFile", "(Ljava/nio/ByteBuffer;)V", nullptr, 0},
	{"skip", "(Ljava/nio/ByteBuffer;)B", nullptr, $PRIVATE, $method(static_cast<int8_t(Type1Font::*)($ByteBuffer*)>(&Type1Font::skip))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"verify", "()V", nullptr, $PRIVATE, $method(static_cast<void(Type1Font::*)()>(&Type1Font::verify)), "java.awt.FontFormatException"},
	{"verifyPFA", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(Type1Font::*)($ByteBuffer*)>(&Type1Font::verifyPFA)), "java.awt.FontFormatException"},
	{"verifyPFB", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(Type1Font::*)($ByteBuffer*)>(&Type1Font::verifyPFB)), "java.awt.FontFormatException"},
	{}
};

$InnerClassInfo _Type1Font_InnerClassesInfo_[] = {
	{"sun.font.Type1Font$T1DisposerRecord", "sun.font.Type1Font", "T1DisposerRecord", $PRIVATE | $STATIC},
	{"sun.font.Type1Font$2", nullptr, nullptr, 0},
	{"sun.font.Type1Font$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type1Font_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.Type1Font",
	"sun.font.FileFont",
	nullptr,
	_Type1Font_FieldInfo_,
	_Type1Font_MethodInfo_,
	nullptr,
	nullptr,
	_Type1Font_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.Type1Font$T1DisposerRecord,sun.font.Type1Font$T1DisposerRecord$1,sun.font.Type1Font$2,sun.font.Type1Font$1"
};

$Object* allocate$Type1Font($Class* clazz) {
	return $of($alloc(Type1Font));
}

$HashMap* Type1Font::styleAbbreviationsMapping = nullptr;
$HashSet* Type1Font::styleNameTokes = nullptr;

void Type1Font::init$($String* platname, Object$* nativeNames) {
	Type1Font::init$(platname, nativeNames, false);
}

void Type1Font::init$($String* platname, Object$* nativeNames, bool createdCopy) {
	$FileFont::init$(platname, nativeNames);
	$set(this, bufferRef, $new($WeakReference, nullptr));
	$set(this, psName, nullptr);
	this->fontRank = $Font2D::TYPE1_RANK;
	try {
		verify();
	} catch ($Throwable& t) {
		if (createdCopy) {
			$var($Type1Font$T1DisposerRecord, ref, $new($Type1Font$T1DisposerRecord, platname));
			$Disposer::addObjectRecord(this->bufferRef, ref);
			$set(this, bufferRef, nullptr);
		}
		if ($instanceOf($FontFormatException, t)) {
			$throw($cast($FontFormatException, t));
		} else {
			$throwNew($FontFormatException, "Unexpected runtime exception."_s);
		}
	}
}

$ByteBuffer* Type1Font::getBuffer() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		$var($ByteBuffer, bbuf, $cast($ByteBuffer, $nc(this->bufferRef)->get()));
		if (bbuf == nullptr) {
			try {
				$var($RandomAccessFile, raf, $cast($RandomAccessFile, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Type1Font$1, this)))));
				$var($FileChannel, fc, $nc(raf)->getChannel());
				this->fileSize = (int32_t)$nc(fc)->size();
				$assign(bbuf, $ByteBuffer::allocate(this->fileSize));
				fc->read(bbuf);
				$nc(bbuf)->position(0);
				$set(this, bufferRef, $new($WeakReference, bbuf));
				fc->close();
			} catch ($NullPointerException& e) {
				$throwNew($FontFormatException, $(e->toString()));
			} catch ($ClosedChannelException& e) {
				$Thread::interrupted();
				return getBuffer();
			} catch ($IOException& e) {
				$throwNew($FontFormatException, $(e->toString()));
			}
		}
		return bbuf;
	}
}

void Type1Font::close() {
}

void Type1Font::readFile($ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($RandomAccessFile, raf, nullptr);
	$var($FileChannel, fc, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$assign(raf, $cast($RandomAccessFile, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Type1Font$2, this)))));
				$assign(fc, $nc(raf)->getChannel());
				while (true) {
					bool var$1 = $nc(buffer)->remaining() > 0;
					if (!(var$1 && $nc(fc)->read(buffer) != -1)) {
						break;
					}
					{
					}
				}
			} catch ($NullPointerException& npe) {
			} catch ($ClosedChannelException& e) {
				try {
					if (raf != nullptr) {
						raf->close();
						$assign(raf, nullptr);
					}
				} catch ($IOException& ioe) {
				}
				$Thread::interrupted();
				readFile(buffer);
			} catch ($IOException& e) {
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			if (raf != nullptr) {
				try {
					raf->close();
				} catch ($IOException& e) {
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$ByteBuffer* Type1Font::readBlock(int32_t offset, int32_t length) {
	$synchronized(this) {
		$var($ByteBuffer, bbuf, nullptr);
		try {
			$assign(bbuf, getBuffer());
			if (offset > this->fileSize) {
				offset = this->fileSize;
			}
			$nc(bbuf)->position(offset);
			return bbuf->slice();
		} catch ($FontFormatException& e) {
			return nullptr;
		}
	}
	$shouldNotReachHere();
}

void Type1Font::verify() {
	$var($ByteBuffer, bb, getBuffer());
	if ($nc(bb)->capacity() < 6) {
		$throwNew($FontFormatException, "short file"_s);
	}
	int32_t val = (int32_t)($nc(bb)->get(0) & (uint32_t)255);
	if (((int32_t)(bb->get(0) & (uint32_t)255)) == 128) {
		verifyPFB(bb);
		bb->position(6);
	} else {
		verifyPFA(bb);
		bb->position(0);
	}
	initNames(bb);
	if (this->familyName == nullptr || this->fullName == nullptr) {
		$throwNew($FontFormatException, "Font name not found"_s);
	}
	setStyle();
}

int32_t Type1Font::getFileSize() {
	if (this->fileSize == 0) {
		try {
			getBuffer();
		} catch ($FontFormatException& e) {
		}
	}
	return this->fileSize;
}

void Type1Font::verifyPFA($ByteBuffer* bb) {
	if ($nc(bb)->getShort() != 9505) {
		$throwNew($FontFormatException, "bad pfa font"_s);
	}
}

void Type1Font::verifyPFB($ByteBuffer* bb) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = 0;
	while (true) {
		try {
			int32_t segType = (int32_t)($nc(bb)->getShort(pos) & (uint32_t)0x0000FFFF);
			if (segType == 0x00008001 || segType == 0x00008002) {
				$init($ByteOrder);
				bb->order($ByteOrder::LITTLE_ENDIAN);
				int32_t segLen = bb->getInt(pos + 2);
				bb->order($ByteOrder::BIG_ENDIAN);
				if (segLen <= 0) {
					$throwNew($FontFormatException, "bad segment length"_s);
				}
				pos += segLen + 6;
			} else if (segType == 0x00008003) {
				return;
			} else {
				$throwNew($FontFormatException, "bad pfb file"_s);
			}
		} catch ($BufferUnderflowException& bue) {
			$throwNew($FontFormatException, $(bue->toString()));
		} catch ($Exception& e) {
			$throwNew($FontFormatException, $(e->toString()));
		}
	}
}

void Type1Font::initNames($ByteBuffer* bb) {
	$useLocalCurrentObjectStackCache();
	bool eof = false;
	$var($String, fontType, nullptr);
	try {
		while ((this->fullName == nullptr || this->familyName == nullptr || this->psName == nullptr || fontType == nullptr) && !eof) {
			int32_t tokenType = nextTokenType(bb);
			if (tokenType == Type1Font::PSNAMETOKEN) {
				int32_t pos = $nc(bb)->position();
				if (bb->get(pos) == u'F') {
					$var($String, s, getSimpleToken(bb));
					if ("FullName"_s->equals(s)) {
						if (nextTokenType(bb) == Type1Font::PSSTRINGTOKEN) {
							$set(this, fullName, getString(bb));
						}
					} else if ("FamilyName"_s->equals(s)) {
						if (nextTokenType(bb) == Type1Font::PSSTRINGTOKEN) {
							$set(this, familyName, getString(bb));
						}
					} else if ("FontName"_s->equals(s)) {
						if (nextTokenType(bb) == Type1Font::PSNAMETOKEN) {
							$set(this, psName, getSimpleToken(bb));
						}
					} else if ("FontType"_s->equals(s)) {
						$var($String, token, getSimpleToken(bb));
						if ("def"_s->equals($(getSimpleToken(bb)))) {
							$assign(fontType, token);
						}
					}
				} else {
					while (bb->get() > u' ') {
					}
				}
			} else if (tokenType == Type1Font::PSEOFTOKEN) {
				eof = true;
			}
		}
	} catch ($Exception& e) {
		$throwNew($FontFormatException, $(e->toString()));
	}
	if (!"1"_s->equals(fontType)) {
		$throwNew($FontFormatException, "Unsupported font type"_s);
	}
	if (this->psName == nullptr) {
		$nc(bb)->position(0);
		if (bb->getShort() != 9505) {
			bb->position(8);
		}
		$var($String, formatType, getSimpleToken(bb));
		bool var$0 = !$nc(formatType)->startsWith("FontType1-"_s);
		if (var$0 && !formatType->startsWith("PS-AdobeFont-"_s)) {
			$throwNew($FontFormatException, $$str({"Unsupported font format ["_s, formatType, "]"_s}));
		}
		$set(this, psName, getSimpleToken(bb));
	}
	if (eof) {
		if (this->fullName != nullptr) {
			$set(this, familyName, fullName2FamilyName(this->fullName));
		} else if (this->familyName != nullptr) {
			$set(this, fullName, this->familyName);
		} else {
			$set(this, fullName, psName2FullName(this->psName));
			$set(this, familyName, psName2FamilyName(this->psName));
		}
	}
}

$String* Type1Font::fullName2FamilyName($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, res, nullptr);
	$var($String, token, nullptr);
	int32_t len = 0;
	int32_t start = 0;
	int32_t end = 0;
	end = $nc(name)->length();
	while (end > 0) {
		start = end - 1;
		while (start > 0 && name->charAt(start) != u' ') {
			--start;
		}
		if (!isStyleToken($(name->substring(start + 1, end)))) {
			return name->substring(0, end);
		}
		end = start;
	}
	return name;
}

$String* Type1Font::expandAbbreviation($String* abbr) {
	if ($nc(Type1Font::styleAbbreviationsMapping)->containsKey(abbr)) {
		return $cast($String, $nc(Type1Font::styleAbbreviationsMapping)->get(abbr));
	}
	return abbr;
}

bool Type1Font::isStyleToken($String* token) {
	return $nc(Type1Font::styleNameTokes)->contains(token);
}

$String* Type1Font::psName2FullName($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, res, nullptr);
	int32_t pos = 0;
	pos = $nc(name)->indexOf((int32_t)u'-');
	if (pos >= 0) {
		$assign(res, expandName($(name->substring(0, pos)), false));
		$plusAssign(res, $$str({" "_s, $(expandName($(name->substring(pos + 1)), true))}));
	} else {
		$assign(res, expandName(name, false));
	}
	return res;
}

$String* Type1Font::psName2FamilyName($String* name) {
	$var($String, tmp, name);
	if ($nc(tmp)->indexOf((int32_t)u'-') > 0) {
		$assign(tmp, tmp->substring(0, tmp->indexOf((int32_t)u'-')));
	}
	return expandName(tmp, false);
}

int32_t Type1Font::nextCapitalLetter($String* s, int32_t off) {
	for (; (off >= 0) && off < $nc(s)->length(); ++off) {
		bool var$0 = s->charAt(off) >= u'A';
		if (var$0 && s->charAt(off) <= u'Z') {
			return off;
		}
	}
	return -1;
}

$String* Type1Font::expandName($String* s, bool tryExpandAbbreviations) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, res, $new($StringBuilder, $nc(s)->length() + 10));
	int32_t start = 0;
	int32_t end = 0;
	while (start < $nc(s)->length()) {
		end = nextCapitalLetter(s, start + 1);
		if (end < 0) {
			end = s->length();
		}
		if (start != 0) {
			res->append(" "_s);
		}
		if (tryExpandAbbreviations) {
			res->append($(expandAbbreviation($(s->substring(start, end)))));
		} else {
			res->append($(s->substring(start, end)));
		}
		start = end;
	}
	return res->toString();
}

int8_t Type1Font::skip($ByteBuffer* bb) {
	int8_t b = $nc(bb)->get();
	while (b == u'%') {
		while (true) {
			b = bb->get();
			if (b == u'\r' || b == u'\n') {
				break;
			}
		}
	}
	while (b <= u' ') {
		b = bb->get();
	}
	return b;
}

int32_t Type1Font::nextTokenType($ByteBuffer* bb) {
	try {
		int8_t b = skip(bb);
		while (true) {
			if (b == (int8_t)u'/') {
				return Type1Font::PSNAMETOKEN;
			} else if (b == (int8_t)u'(') {
				return Type1Font::PSSTRINGTOKEN;
			} else if ((b == (int8_t)u'\r') || (b == (int8_t)u'\n')) {
				b = skip(bb);
			} else {
				b = $nc(bb)->get();
			}
		}
	} catch ($BufferUnderflowException& e) {
		return Type1Font::PSEOFTOKEN;
	}
	$shouldNotReachHere();
}

$String* Type1Font::getSimpleToken($ByteBuffer* bb) {
	while ($nc(bb)->get() <= u' ') {
	}
	int32_t pos1 = $nc(bb)->position() - 1;
	while (bb->get() > u' ') {
	}
	int32_t pos2 = bb->position();
	$var($bytes, nameBytes, $new($bytes, pos2 - pos1 - 1));
	bb->position(pos1);
	bb->get(nameBytes);
	try {
		return $new($String, nameBytes, "US-ASCII"_s);
	} catch ($UnsupportedEncodingException& e) {
		return $new($String, nameBytes);
	}
	$shouldNotReachHere();
}

$String* Type1Font::getString($ByteBuffer* bb) {
	int32_t pos1 = $nc(bb)->position();
	while (bb->get() != u')') {
	}
	int32_t pos2 = bb->position();
	$var($bytes, nameBytes, $new($bytes, pos2 - pos1 - 1));
	bb->position(pos1);
	bb->get(nameBytes);
	try {
		return $new($String, nameBytes, "US-ASCII"_s);
	} catch ($UnsupportedEncodingException& e) {
		return $new($String, nameBytes);
	}
	$shouldNotReachHere();
}

$String* Type1Font::getPostscriptName() {
	return this->psName;
}

$FontScaler* Type1Font::getScaler() {
	$synchronized(this) {
		if (this->scaler == nullptr) {
			$set(this, scaler, $FontScaler::getScaler(this, 0, false, this->fileSize));
		}
		return this->scaler;
	}
}

$CharToGlyphMapper* Type1Font::getMapper() {
	if (this->mapper == nullptr) {
		$set(this, mapper, $new($Type1GlyphMapper, this));
	}
	return this->mapper;
}

int32_t Type1Font::getNumGlyphs() {
	try {
		return $nc($(getScaler()))->getNumGlyphs();
	} catch ($FontScalerException& e) {
		$set(this, scaler, $FontScaler::getNullScaler());
		return getNumGlyphs();
	}
	$shouldNotReachHere();
}

int32_t Type1Font::getMissingGlyphCode() {
	try {
		return $nc($(getScaler()))->getMissingGlyphCode();
	} catch ($FontScalerException& e) {
		$set(this, scaler, $FontScaler::getNullScaler());
		return getMissingGlyphCode();
	}
	$shouldNotReachHere();
}

int32_t Type1Font::getGlyphCode(char16_t charCode) {
	try {
		return $nc($(getScaler()))->getGlyphCode(charCode);
	} catch ($FontScalerException& e) {
		$set(this, scaler, $FontScaler::getNullScaler());
		return getGlyphCode(charCode);
	}
	$shouldNotReachHere();
}

$String* Type1Font::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"** Type1 Font: Family="_s, this->familyName, " Name="_s, this->fullName, " style="_s, $$str(this->style), " fileName="_s, $(getPublicFileName())});
}

void clinit$Type1Font($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$assignStatic(Type1Font::styleAbbreviationsMapping, $new($HashMap));
		$assignStatic(Type1Font::styleNameTokes, $new($HashSet));
		$var($StringArray, nm, $new($StringArray, {
			"Black"_s,
			"Bold"_s,
			"Book"_s,
			"Demi"_s,
			"Heavy"_s,
			"Light"_s,
			"Meduium"_s,
			"Nord"_s,
			"Poster"_s,
			"Regular"_s,
			"Super"_s,
			"Thin"_s,
			"Compressed"_s,
			"Condensed"_s,
			"Compact"_s,
			"Extended"_s,
			"Narrow"_s,
			"Inclined"_s,
			"Italic"_s,
			"Kursiv"_s,
			"Oblique"_s,
			"Upright"_s,
			"Sloped"_s,
			"Semi"_s,
			"Ultra"_s,
			"Extra"_s,
			"Alternate"_s,
			"Alternate"_s,
			"Deutsche Fraktur"_s,
			"Expert"_s,
			"Inline"_s,
			"Ornaments"_s,
			"Outline"_s,
			"Roman"_s,
			"Rounded"_s,
			"Script"_s,
			"Shaded"_s,
			"Swash"_s,
			"Titling"_s,
			"Typewriter"_s
		}));
		$var($StringArray, abbrv, $new($StringArray, {
			"Blk"_s,
			"Bd"_s,
			"Bk"_s,
			"Dm"_s,
			"Hv"_s,
			"Lt"_s,
			"Md"_s,
			"Nd"_s,
			"Po"_s,
			"Rg"_s,
			"Su"_s,
			"Th"_s,
			"Cm"_s,
			"Cn"_s,
			"Ct"_s,
			"Ex"_s,
			"Nr"_s,
			"Ic"_s,
			"It"_s,
			"Ks"_s,
			"Obl"_s,
			"Up"_s,
			"Sl"_s,
			"Sm"_s,
			"Ult"_s,
			"X"_s,
			"A"_s,
			"Alt"_s,
			"Dfr"_s,
			"Exp"_s,
			"In"_s,
			"Or"_s,
			"Ou"_s,
			"Rm"_s,
			"Rd"_s,
			"Scr"_s,
			"Sh"_s,
			"Sw"_s,
			"Ti"_s,
			"Typ"_s
		}));
		$var($StringArray, styleTokens, $new($StringArray, {
			"Black"_s,
			"Bold"_s,
			"Book"_s,
			"Demi"_s,
			"Heavy"_s,
			"Light"_s,
			"Medium"_s,
			"Nord"_s,
			"Poster"_s,
			"Regular"_s,
			"Super"_s,
			"Thin"_s,
			"Compressed"_s,
			"Condensed"_s,
			"Compact"_s,
			"Extended"_s,
			"Narrow"_s,
			"Inclined"_s,
			"Italic"_s,
			"Kursiv"_s,
			"Oblique"_s,
			"Upright"_s,
			"Sloped"_s,
			"Slanted"_s,
			"Semi"_s,
			"Ultra"_s,
			"Extra"_s
		}));
		for (int32_t i = 0; i < nm->length; ++i) {
			$nc(Type1Font::styleAbbreviationsMapping)->put(abbrv->get(i), nm->get(i));
		}
		for (int32_t i = 0; i < styleTokens->length; ++i) {
			$nc(Type1Font::styleNameTokes)->add(styleTokens->get(i));
		}
	}
}

Type1Font::Type1Font() {
}

$Class* Type1Font::load$($String* name, bool initialize) {
	$loadClass(Type1Font, name, initialize, &_Type1Font_ClassInfo_, clinit$Type1Font, allocate$Type1Font);
	return class$;
}

$Class* Type1Font::class$ = nullptr;

	} // font
} // sun