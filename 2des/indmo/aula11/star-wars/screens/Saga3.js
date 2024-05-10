import React from "react";
import { Text, View, Image, StyleSheet } from "react-native";
import colors from "../constants/colors";

const Saga3 = () => {
    return (
        <View style={styles.container}>
            <Image 
                source={{uri: "./assets/star-wars.jpg"}}
                style={styles.image}
            />
            <View style={styles.textContainer}>
                <Text style={styles.paragraph}>
                    “Star Wars Episódio III: A Vingança dos Sith” é o clímax dramático da trilogia prequela. O filme narra a queda de Anakin Skywalker e o surgimento do temido Darth Vader. Com batalhas épicas e efeitos visuais impressionantes, o longa entrega momentos emocionantes e decisivos para a saga.
                </Text>
                <Text style={styles.paragraph}>
                    A transformação de Anakin, impulsionada pelo medo e manipulação, culmina em uma luta de sabres de luz memorável com Obi-Wan Kenobi, marcando o fim da República e o nascimento do Império Galáctico. Apesar das críticas, o filme é essencial para entender a complexidade e a tragédia do herói caído.
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

export default Saga3;
