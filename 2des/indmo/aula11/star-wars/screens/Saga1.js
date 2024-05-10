import React from "react";
import { Text, View, Image, StyleSheet } from "react-native";
import colors from "../constants/colors";
import { Paragraph } from "react-native-paper";

const Saga1 = () => {
    return (
        <View style={styles.container}>
            <Image 
                source={{uri: "./assets/filmes-star-wars.jpg"}}
                style={styles.image}
            />
            <View style={styles.textContainer}>
                <Text style={styles.paragraph}>
                    “Star Wars Episódio I: A Ameaça Fantasma” é o início da saga que explora a origem de Darth Vader. Lançado em 1999, o filme mergulha na política da galáxia, apresentando a Federação Comercial e o planeta Naboo.
                </Text>
                <Text style={styles.paragraph}>
                    O Jedi Qui-Gon Jinn e seu aprendiz Obi-Wan Kenobi se aventuram para salvar Naboo, acompanhados pela Rainha Amidala. Em Tatooine, encontram Anakin Skywalker, um menino com potencial para se tornar Jedi. Com efeitos especiais revolucionários para a época, o filme expande o universo Star Wars, apesar de críticas mistas quanto ao seu enredo e personagens.
                </Text>
            </View>
        </View>
    );
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: colors.blue,
        alignItems: 'center',
        justifyContent: 'center',
    },
    image: {
        width: 350,
        height: 200,
        borderRadius: 5,
    },
    textContainer: {
        backgroundColor: colors.yellow,

        marginHorizontal: 25,
        marginVertical: 25,

        paddingVertical: 15,
        paddingHorizontal: 25,

        borderRadius: 5,
    },
    paragraph: {
        fontSize: 15,
    }
});

export default Saga1; 
