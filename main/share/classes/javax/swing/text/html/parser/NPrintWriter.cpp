#include <javax/swing/text/html/parser/NPrintWriter.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _NPrintWriter_FieldInfo_[] = {
	{"numLines", "I", nullptr, $PRIVATE, $field(NPrintWriter, numLines)},
	{"numPrinted", "I", nullptr, $PRIVATE, $field(NPrintWriter, numPrinted)},
	{}
};

$MethodInfo _NPrintWriter_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(NPrintWriter::*)(int32_t)>(&NPrintWriter::init$))},
	{"println", "([C)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NPrintWriter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.parser.NPrintWriter",
	"java.io.PrintWriter",
	nullptr,
	_NPrintWriter_FieldInfo_,
	_NPrintWriter_MethodInfo_
};

$Object* allocate$NPrintWriter($Class* clazz) {
	return $of($alloc(NPrintWriter));
}

void NPrintWriter::init$(int32_t numberOfLines) {
	$PrintWriter::init$(static_cast<$OutputStream*>($System::out));
	this->numLines = 5;
	this->numPrinted = 0;
	this->numLines = numberOfLines;
}

void NPrintWriter::println($chars* array) {
	if (this->numPrinted >= this->numLines) {
		return;
	}
	$var($chars, partialArray, nullptr);
	for (int32_t i = 0; i < $nc(array)->length; ++i) {
		if (array->get(i) == u'\n') {
			++this->numPrinted;
		}
		if (this->numPrinted == this->numLines) {
			$System::arraycopy(array, 0, partialArray, 0, i);
		}
	}
	if (partialArray != nullptr) {
		$PrintWriter::print(partialArray);
	}
	if (this->numPrinted == this->numLines) {
		return;
	}
	$PrintWriter::println(array);
	++this->numPrinted;
}

NPrintWriter::NPrintWriter() {
}

$Class* NPrintWriter::load$($String* name, bool initialize) {
	$loadClass(NPrintWriter, name, initialize, &_NPrintWriter_ClassInfo_, allocate$NPrintWriter);
	return class$;
}

$Class* NPrintWriter::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax