#ifndef CLICOMMANDREMOVE_H
#define CLICOMMANDREMOVE_H

#include "clicommand.h"

class CliCommandRemove : public CliCommand
{
    public:
        void execute();
        QString shortHelp() const;
        QString fullHelp() const;
        void defineSyntax();
};

#endif // CLICOMMANDREMOVE_H