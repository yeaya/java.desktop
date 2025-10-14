#ifndef _SwingContainerIsForContainerOnly$1_h_
#define _SwingContainerIsForContainerOnly$1_h_
//$ class SwingContainerIsForContainerOnly$1
//$ extends java.nio.file.SimpleFileVisitor

#include <java/nio/file/SimpleFileVisitor.h>

namespace java {
	namespace nio {
		namespace file {
			class FileVisitResult;
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}

class SwingContainerIsForContainerOnly$1 : public ::java::nio::file::SimpleFileVisitor {
	$class(SwingContainerIsForContainerOnly$1, $NO_CLASS_INIT, ::java::nio::file::SimpleFileVisitor)
public:
	SwingContainerIsForContainerOnly$1();
	void init$();
	virtual ::java::nio::file::FileVisitResult* visitFile(::java::nio::file::Path* file, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual ::java::nio::file::FileVisitResult* visitFile(Object$* file, ::java::nio::file::attribute::BasicFileAttributes* attrs) override;
};

#endif // _SwingContainerIsForContainerOnly$1_h_