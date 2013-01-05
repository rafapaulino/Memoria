//
//  Pessoa.h
//  Memoria
//
//  Created by Rafael Brigagão Paulino on 21/08/12.
//  Copyright (c) 2012 Rafael Brigagão Paulino. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Pessoa : NSObject

//antes do arc, nos tinhamos que nos preocupar com a gerencai de memoria
//retain - para aumentar a contagem referencial (RC) em 1
//release - para diminuir a contagem referencial em 1
//um objeto so e descartado quando o RC chegava a zero, momento em que o metodo dealloc e executado
//na property abaixo, como nao habilitamos o arc ao criar este projeto, precisamos solicitar um retain na assinatura
@property (nonatomic, retain) NSString *nome;


@end
