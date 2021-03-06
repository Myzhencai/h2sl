# GENGETOPT FILES
set(GGOS
    rewrite_examples.ggo
    llm_train.ggo
    grammar_generator.ggo
    gui_demo.ggo)

# HEADER FILES
set(HDRS
    h2sl/gui.h)

# QT HEADER FILES
set(QT_HDRS 
    h2sl/gui.h)

# SOURCE FILES
set(SRCS
    gui.cc)

# BINARY SOURCE FILES
set(BIN_SRCS
    rewrite_examples.cc
    llm_train.cc
    grammar_generator.cc
    gui_demo.cc )

# LIBRARY DEPENDENCIES
set(DEPS h2sl-dcg h2sl-llm h2sl-parser h2sl-language h2sl-symbol h2sl-common ${LBFGS_LIBRARY} ${QT_LIBRARIES} ${LIBXML2_LIBRARIES} ${Boost_LIBRARIES})

# LIBRARY NAME
set(LIB h2sl-util)

# process the headers
process_hdrs(HDRS ${HDRS} QT_HDRS ${QT_HDRS})

# process the library
process_lib(LIB ${LIB} QT_HDRS ${QT_HDRS} SRCS ${SRCS} DEPS ${DEPS})

# process the binaries
process_bin_srcs(LIB ${LIB} BIN_SRCS ${BIN_SRCS} GGOS ${GGOS} DEPS ${DEPS})
