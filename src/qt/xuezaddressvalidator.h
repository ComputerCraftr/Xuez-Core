// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class XUEZAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit XUEZAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** XUEZ address widget validator, checks for a valid xuez address.
 */
class XUEZAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit XUEZAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
